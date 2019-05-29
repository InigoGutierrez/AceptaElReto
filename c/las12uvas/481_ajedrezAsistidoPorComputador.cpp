#include <iostream>

using namespace std;

int main() {
	char row, col;
	cin >> row;
	cin >> col;
	while (row != '0') {
		row = 153 - row; // 'h' - (row - '1')
		cout << row << col << endl;
		cin >> row;
		cin >> col;
	}
}
