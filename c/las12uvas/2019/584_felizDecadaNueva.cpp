#include <iostream>

int main() {
	int primero;
	int este;
	std::string salida;
	while (std::cin >> primero) {
		std::cin >> este;
		este = este - primero;
		((este+1) % 10 == 0) ? salida = "FELIZ DECADA NUEVA" : salida = "TOCA ESPERAR";
		std::cout << salida << std::endl;
	}
}
