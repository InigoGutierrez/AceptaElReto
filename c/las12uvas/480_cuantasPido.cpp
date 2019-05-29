#include <iostream>

using namespace std;

int main() {
	int cases;
	int grapes, bad, group;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> grapes;
		cin >> bad;
		cin >> group;
		//cout << "Grapes/group case " << i << ": " << grapes/group << endl;
		cout << (grapes/group)*bad + min(grapes%group, bad) << endl;
	}
}
