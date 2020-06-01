#include <iostream>

int main() {
	int abuelo;
	int iglesia;
	std::string salida;
	std::cin >> abuelo;
	std::cin >> iglesia;
	while (abuelo || iglesia) {
		(iglesia > abuelo) ? salida  = "SENIL" :  salida = "CUERDO";
		std::cout << salida << std::endl;
		std::cin >> abuelo;
		std::cin >> iglesia;
	}
}
