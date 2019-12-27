#include <iostream>

int main() {
	int casos;
	std::string horaA, horaB;
	int primera, ultima;
	int campanadas, objetivo;
	int paso, resultado;
	int horas, minutos, segundos;
	std::string sHoras, sMinutos, sSegundos;
	int segundosEnDia = 3600*24;
	for (std::cin >> casos; casos > 0; casos--) {

		// Leer info
		std::cin >> horaA;
		std::cin >> horaB;
		std::cin >> campanadas;
		std::cin >> objetivo;

		// Procesar horas
		primera = std::stoi(horaA.substr(0, 2))*3600;
		primera += std::stoi(horaA.substr(3, 2))*60;
		primera += std::stoi(horaA.substr(6, 2));

		ultima = std::stoi(horaB.substr(0, 2))*3600;
		ultima += std::stoi(horaB.substr(3, 2))*60;
		ultima += std::stoi(horaB.substr(6, 2));

		if (ultima < primera) {
			ultima += segundosEnDia;
		}

		// Calcular paso entre horas
		paso = (ultima - primera) / (campanadas - 1);
		resultado = primera + paso * (objetivo - 1);

		// Pasar resultado a formato hora
		horas = resultado / 3600;
		minutos = resultado % 3600 / 60;
		segundos = resultado % 60;
		while (horas >= 24)
			horas -= 24;
		// Apaños de ceros iniciales
		(horas < 10) ? sHoras = "0" : sHoras = "";
		(minutos < 10) ? sMinutos = "0" : sMinutos = "";
		(segundos < 10) ? sSegundos = "0" : sSegundos = "";
		// Escribir resultado
		std::cout << sHoras << horas << ":";
		std::cout << sMinutos << minutos << ":";
		std::cout << sSegundos << segundos << std::endl;
	}
}
