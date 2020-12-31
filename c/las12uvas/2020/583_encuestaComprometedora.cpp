#include <iostream>

int main() {

	int casos, comp, segunda;
	int n;
	int nReal;
	int compReal;
	int porcentaje;

	std::cin >> casos;

	while (casos > 0) {
		std::cin >> comp;
		std::cin >> segunda;

		n = comp + segunda;
		nReal = n/2;
		compReal = comp - nReal;
		porcentaje = compReal * 100 / nReal;

		std::cout << porcentaje << '\n';

		casos--;
	}

	return 0;
}
