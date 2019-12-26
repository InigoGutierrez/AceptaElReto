#include <iostream>
#include <vector>

std::string input, type;
std::vector<std::string> parts;
std::string tempString;
int i;

int isUppercase(char character) {
	return character >= 'A' && character <= 'Z';
}

void getPartsByDelim(std::string delim) {
	while (input.find(delim) != std::string::npos) {
		parts.push_back(input.substr(0, input.find(delim)));
		input = input.substr(input.find(delim)+1);
	}
	parts.push_back(input);
}

int main() {
	while (std::cin >> input && !std::cin.eof()) {
		// Separar variable en componentes
		parts.clear();
		// Entrada CamelCase
		if (isUppercase(input[0])) {
			tempString.clear();
			for (char character : input) {
				if (isUppercase(character)) {
					parts.push_back(tempString);
					tempString.clear();
				}
				tempString.push_back(tolower(character));
			}
			parts.push_back(tempString);
			parts.erase(parts.begin());
		}
		// Entrada snake_case
		else if (input.find("_") != std::string::npos) {
			getPartsByDelim("_");
		}
		// Entrada kebab-case
		else if (input.find("-") != std::string::npos) {
			getPartsByDelim("-");

		}
		else {
			parts.push_back(input);
		}

		// Escribir variable como se pida
		std::cin >> type;
		if (type == "CamelCase") {
			for (std::string word : parts) {
				std::cout << (char)toupper(word[0]) << word.substr(1);
			}
			std::cout << std::endl;
		}
		else if (type == "snake_case") {
			for (i = 0; i < (int)parts.size()-1; i++) {
				std::cout << parts[i] << "_";
			}
			std::cout << parts[i] << std::endl;
		}
		else if (type == "kebab-case") {
			for (i = 0; i < (int)parts.size()-1; i++) {
				std::cout << parts[i] << "-";
			}
			std::cout << parts[i] << std::endl;

		}
	}
}
