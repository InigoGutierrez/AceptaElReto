#include <iostream>

int main(void) {
	int lado, reinas;
	int *filas, *columnas;
	int i, j;
	int atacadas;
	std::cin >> lado;
	std::cin >> reinas;
	while (lado) {
		// Leer tamaño, número de reinas y posición de cada una
		filas = new int [lado];
		columnas = new int [lado];
		for (i = 0; i < reinas; i++) {
			std::cin >> filas[i];
			std::cin >> columnas[i];
		}
		atacadas = 0;
		for (i = 0; i < reinas-1 && !atacadas; i++) {
			for (j = i+1; j < reinas && !atacadas; j++) {
				// Comprobar choques cartesianos: no hay reinas que compartan fila o columna
				if (filas[i] == filas[j] || columnas[i] == columnas[j])
					atacadas = 1;
				// Comprobar choques diagonales: no hay la misma distancia entre la fila y la columna para dos reinas
				else if (abs(filas[i] - filas[j]) == abs(columnas[i] - columnas[j]))
					atacadas = 1;
			}
		}
		delete [] filas;
		delete [] columnas;
		if (atacadas)
			std::cout << "SI\n";
		else
			std::cout << "NO\n";
		std::cin >> lado;
		std::cin >> reinas;
	}
	return 0;
}
