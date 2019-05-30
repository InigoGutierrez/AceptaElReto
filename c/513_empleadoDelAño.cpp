#include <iostream>

using namespace std;

// mean: Ex / n = m; a/n + b/n + x/n = m; (a+b)/n = m - x/n; x = -n((a+b)/n-m)
int main() {
	int days, day, total, mean;
	while (cin >> days) {
		total = 0;
		for (int n = 1; n <= days; n++) {
			cin >> mean;
			day = n*mean-total;
			total += day;
			if (n != days)
				cout << day << " ";
			else
				cout << day << endl;
		}
	}
}
