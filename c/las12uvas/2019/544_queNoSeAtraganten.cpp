#include <iostream>
#include <algorithm>

int main() {
	int uvas, pesoMax;
	int previo;
	int total;
	while (std::cin >> uvas) {
		std::cin >> pesoMax;
		int pesos[uvas];
		for (int i = 0; i < uvas; i++) {
			std::cin >> pesos[i];
		}
		std::sort(pesos, pesos+uvas);
		previo = 0;
		total = 0;
		for (int i = 0; i < uvas; i++) {
			if (pesos[i] + previo > pesoMax) {
				break;
			}
			total++;
			previo = pesos[i];
		}
		std::cout << total << std::endl;
	}

	return 0;
}
