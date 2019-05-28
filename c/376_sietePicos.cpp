#include <iostream>

using namespace std;

int main() {
	int size;
	int prev, next;
	int picos;
	cin>>size; // Primera lectura del tamaño fuera del bucle para primera comprobación
	while (size != 0) {
		int heights[size];
		// Lee todas las alturas
		for (int i = 0; i < size; i++) {
			cin>>heights[i];
		}
		picos = 0;
		// Comprueba todas las alturas
		for (int i = 0; i < size; i++) {
			prev = i-1;
			if (prev < 0)
				prev = size-1;
			next = (i+1)%size;
			if (heights[i] > heights[prev] && heights[i] > heights[next])
				picos++;
		}
		cout<<picos<<endl;
		cin>>size;
	}
}
