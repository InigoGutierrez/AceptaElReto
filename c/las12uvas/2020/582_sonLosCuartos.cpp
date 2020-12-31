#include <iostream>

int main() {

	int casos;
	std::string campanada;
	std::string correcto;

	correcto = "doong";
	for (int i = 0; i < 11; i++) {
		correcto += " doong";
	}

	std::cin >> casos;
	std::getline(std::cin, campanada);

	while (casos > 0) {
		std::getline(std::cin, campanada);
		if (campanada == "") {
			std::cout << "MARISA NARANJO\n";
		}
		else if (campanada[1] == 'i' ) {
			std::cout << "SALIDA NULA\n";
		}
		else if (campanada == correcto) {
			std::cout << "CORRECTO\n";
		}
		else {
			std::cout << "TARDE\n";
		}
		casos--;
	}

	return 0;
}
