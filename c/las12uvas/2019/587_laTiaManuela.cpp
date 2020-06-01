#include <iostream>
#include <vector>
#include <algorithm>

int cabe(std::vector<int> j, std::vector<int> c) {
	for (int i = 0; i < 3; i++) {
		if (j[i] >= c[i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int casos;
	std::vector<int> juguete;
	std::vector<int> caja;
	int n;
	std::string salida;
	std::cin >> casos;
	for (int i = 0; i < casos; i++) {
		juguete.clear();
		caja.clear();
		for (int j = 0; j < 3; j++) {
			std::cin >> n;
			juguete.push_back(n);
		}
		for (int j = 0; j < 3; j++) {
			std::cin >> n;
			caja.push_back(n);
		}
		std::sort(juguete.begin(), juguete.end());
		std::sort(caja.begin(), caja.end());
		salida = cabe(juguete, caja) ? "SIRVE" : "NO SIRVE";
		std::cout << salida << std::endl;
	}
}

