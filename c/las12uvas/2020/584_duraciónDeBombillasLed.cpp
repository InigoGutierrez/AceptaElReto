#include <iostream>

int main() {

	int casos, horas, encendidos, horasUso;
	std::string causa = "";

	std::cin >> casos;

	while (casos > 0) {
		std::cin >> horas;
		std::cin >> encendidos;
		std::cin >> horasUso;

		if (horasUso * encendidos > horas)
			causa = "HORAS";
		else if (horasUso * encendidos < horas)
			causa = "ENCENDIDOS";
		else
			causa = "AMBAS";

		std::cout << causa << '\n';
		casos--;
	}

	return 0;
}
