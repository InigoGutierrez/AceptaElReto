#include <iostream>

int sudoku[9][9];
int casos;
int row, col;
int checker[9];

void cleanChecker() {
	int i;
	for (i = 0; i < 9; i++) {
		checker[i] = 0;
	}
}

int touchChecker(int row, int col) {
	if (checker[sudoku[row][col]-1])
		return 1;
	checker[sudoku[row][col]-1] = 1;
	return 0;
}

// Devuelve 1 si encuentra error, 0 si no
int region(int startRow, int startCol) {
	int row, col;
	cleanChecker();
	for (row = startRow; row < startRow + 3; row++) {
		for (col = startCol; col < startCol + 3; col++) {
			if (touchChecker(row, col))
				return 1;
		}
	}
	return 0;
}

std::string computeCase() {
		// Leer caso
		for (row = 0; row < 9; row++) {
			for (col = 0; col < 9; col++) {
				std::cin >> sudoku[row][col];
			}
		}

		// Computar caso
		// Filas
		for (row = 0; row < 9; row++) {
			cleanChecker();
			for (col = 0; col < 9; col++) {
				if (touchChecker(row, col)) {
					return "NO";
				}
			}
		}
		// Columnas
		for (col = 0; col < 9; col++) {
			cleanChecker();
			for (row = 0; row < 9; row++) {
				if (touchChecker(row, col)) {
					return "NO";
				}
			}
		}
		// Celdas 3x3
		for (row = 0; row < 9; row+=3) {
			for (col = 0; col < 9; col+=3) {
				if (region(row, col)) {
					return "NO";
				}
			}
		}
		return "SI";
}

int main(void) {
	for (std::cin >> casos; casos > 0; casos--) {
		std::cout << computeCase() << std::endl;
	}
}
