#include <iostream>

int main() {
	int casos;
	int caso;
	std::string respuesta;
	for (std::cin >> casos; casos > 0; casos--) {
		std::cin >> caso;
		(caso % 3 == 1) ? respuesta = "NO" : respuesta = "SI";
		std::cout << respuesta << std::endl;
	}
}
