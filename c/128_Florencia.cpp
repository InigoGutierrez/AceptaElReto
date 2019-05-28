#include <iostream>

using namespace std;

int main() {
	int size;
	int sides, parts, length;
	int totalPieces, rest, remainingSize;
	int imposibleFlag;
	cin >> size; // Primera lectura del tamaño fuera del bucle para primera comprobación
	while (size != -1) {
		totalPieces = 1;
		rest = 0;
		cin >> sides;
		imposibleFlag = 0;
		remainingSize = size;
		while (sides != -1) {
			cin >> parts;
			cin >> length;
			if (length > size && !imposibleFlag) {
				cout<<"IMPOSIBLE\n";
				imposibleFlag = 1;
			}
			else {
				for (int i = 0; i < sides * parts; i++ ) {
					if (remainingSize >= length)
						remainingSize -= length;
					else {
						rest += remainingSize;
						cout<<"Added "<<remainingSize<<" to rest.\n";
						remainingSize = size;
						totalPieces++;
					}
				}
			}
			cin >> sides;
		}
		if (remainingSize == size)
			totalPieces--;
		if (!imposibleFlag)
			cout<<totalPieces<<" "<<rest<<endl;
		cin >> size;
	}
}
