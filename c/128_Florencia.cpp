#include <iostream>

using namespace std;

int main() {
	int size;
	int sides, parts, length;
	int totalPieces, rest, remainingSize;
	int impossibleFlag;
	cin >> size; // Primera lectura del tamaño fuera del bucle para primera comprobación
	while (size != -1) {
		totalPieces = 1;
		rest = 0;
		remainingSize = size;
		impossibleFlag = 0;
		cin >> sides;
		while (sides != -1) {
			cin >> parts;
			cin >> length;
			if (length > size && !impossibleFlag) {
				cout<<"IMPOSIBLE\n";
				impossibleFlag = 1;
			}
			else if (!impossibleFlag) {
				for (int i = 0; i < sides * parts; i++ ) {
					if (remainingSize >= length)
						remainingSize -= length;
					else {
						rest += remainingSize;
						remainingSize = size - length;
						totalPieces++;
					}
				}
			}
			cin >> sides;
		}
		if (remainingSize != size)
			rest += remainingSize;
		else { // Se ejecuta cuando no se ha usado nada de varilla (remainingSize nunca vuelve a ser size).
			totalPieces = 0;
			rest = 0;
		}
		if (!impossibleFlag)
			cout<<totalPieces<<" "<<rest<<endl;
		cin >> size;
	}
}
