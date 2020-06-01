#include <iostream>

int getGcd(int a, int b) {
	if (a == 0 && b == 0)
		return 1;
	if (a == 0)
		return b;
    return b == 0 ? a : getGcd(b, a % b);
}

int main() {
	int is, vs, xs;
	int gcd;
	int piezas;
	std::cin >> is;
	std::cin >> vs;
	std::cin >> xs;
	while (is || vs || xs) {
		gcd = std::min(getGcd(is, vs), std::min(getGcd(vs, xs), getGcd(is, xs)));
		piezas = is / gcd;
		piezas += vs / gcd;
		piezas += xs / gcd;
		std::cout << piezas << std::endl;

		std::cin >> is;
		std::cin >> vs;
		std::cin >> xs;
	}
}
