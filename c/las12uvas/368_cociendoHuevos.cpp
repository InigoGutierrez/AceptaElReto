#include <iostream>

using namespace std;

int main() {
	int eggs, size;
	cin >> eggs;
	while (eggs != 0) {
		cin >> size;
		cout << (eggs/size + (eggs%size != 0)) * 10 << endl;
		cin >> eggs;
	}
}
