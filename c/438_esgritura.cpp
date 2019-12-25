#include <iostream>

int esLetra(char letra) {
	if (letra >= 'a' && letra <= 'z') {
		return 1;
	}
	if (letra >= 'A' && letra <= 'Z') {
		return 1;
	}
	return 0;
}

int main() {
	std::string input = "";
	int letras, excs;
	//while (std::cin >> input && !std::cin.eof()) {
	while (std::getline(std::cin, input)) {
		letras = 0;
		excs = 0;
		for (char letra : input) {
			if (esLetra(letra)) {
				letras++;
			}
			if (letra == '!') {
				excs++;
			}
		}
		if (excs > letras) {
			std::cout << "ESGRITO" << std::endl;
		}
		else {
			std::cout << "escrito" << std::endl;
		}
	}
}
