#include <iostream>

using namespace std;

int main() {
	char i;
	char black, grey;
	cin >> i;
	if ( i != '.' )
		do {
			black = 0;
			grey = 0;
			while (i != '.') {
			if ( i == 'N' )
				black = (black+1)%2;
			if ( i == 'G' )
				grey = (grey+1)%2;
			cin >> i;
			}
			if (black && grey)
				cout << "PAREJA MIXTA\n";
			else if (black)
				cout << "NEGRO SOLITARIO\n";
			else if (grey)
				cout << "GRIS SOLITARIO\n";
			else
				cout << "EMPAREJADOS\n";
			cin >> i;
		} while (i != '.');
}
