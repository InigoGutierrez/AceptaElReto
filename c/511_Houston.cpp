#include <iostream>

using namespace std;

int main() {
	int groupsA, groupsB; // Grupos totales de cada vector
	int iA, iB; // Índices para iterar por los vectores de grupos y valores
	double step, total; // Cuántos valores van a sumarse en un solo paso y suma total
	cout.precision(0);
	while (cin >> groupsA && !cin.eof()) {
		cin >> groupsB;
		int lengthsA[groupsA], valuesA[groupsA]; // Tamaño de cada grupo y su valor
		for (int a = 0; a < groupsA; a++) {
			cin >> lengthsA[a];
			cin >> valuesA[a];
		}
		int lengthsB[groupsB], valuesB[groupsB];
		for (int b = 0; b < groupsB; b++) {
			cin >> lengthsB[b];
			cin >> valuesB[b];
		}
		iA = 0;
		iB = 0;
		total = 0;
		while (iA < groupsA) { // Hasta que se computen todos los grupos de A (A y B igual de largos)
			// Computa a la vez tantas parejas iguales como se pueda (step)
			step = min(lengthsA[iA], lengthsB[iB]);
			total += step * valuesA[iA] * valuesB[iB];
			// Descuenta los valores computados de la longitud de cada grupo (al menos uno se vuelve cero)
			lengthsA[iA] -= step;
			lengthsB[iB] -= step;
			// Cuando la longitud de un grupo es cero, empieza a considerar el siguiente grupo
			if (!lengthsA[iA])
				iA++;
			if (!lengthsB[iB])
				iB++;
		}
		cout << fixed << total << endl;
	}
}
