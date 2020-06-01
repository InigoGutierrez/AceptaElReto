#include <iostream>

int sumN = 5;
int mulN = 3;

int solve(int input) {

	int result = 0;

	if (input == 1) {
		return 1;
	}

	if (input > 0 && input % mulN == 0) {
		result = solve(input / mulN);
	}

	if (!result) {
		if (input > sumN) {
			result = solve(input - sumN);
		}
	}

	return result;

}

int main() {
	int input;
	std::cin >> input;
	while (input != 0) {
		if (solve(input))
			std::cout << "SI\n";
		else
			std::cout << "NO\n";
		std::cin >> input;
	}
	return 0;
}
