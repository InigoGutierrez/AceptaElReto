#include <iostream>

void solveMatrix(int size) {
	int value;
	int wrong = 0;
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			std::cin >> value;
			if ( (col == row && value != 1) || (col != row && value != 0) ) {
				wrong = 1;
			}
		}
	}
	if (wrong)
		std::cout << "NO\n";
	else
		std::cout << "SI\n";
}

int main() {
	int size;
	std::cin >> size;
	while (size != 0) {
		solveMatrix(size);
		std::cin >> size;
	}
	return 0;
}
