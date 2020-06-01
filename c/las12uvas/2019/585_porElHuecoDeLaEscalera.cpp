#include <iostream>

int main() {
	int casos;
	int pisos, escalones;
	int pSubidos, eSubidos;
	int bajados, subidos;
	std::cin >> casos;
	for (int i = 0; i < casos; i++) {
		std::cin >> pisos;
		std::cin >> escalones;
		std::cin >> pSubidos;
		std::cin >> eSubidos;
		bajados = pSubidos * escalones + eSubidos;
		subidos = bajados * 2 + (pisos - pSubidos) * escalones - eSubidos;
		std::cout << bajados << " " << subidos << std::endl;
	}
}
