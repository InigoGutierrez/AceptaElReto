#include <iostream>

using namespace std;

int main() {
	int cases;
	int rabbit, horse;
	for (cin >> cases; cases > 0; cases--) {
		cin >> rabbit;
		cin >> horse;
		cout << rabbit*100/(rabbit+horse) << endl;
	}
}
