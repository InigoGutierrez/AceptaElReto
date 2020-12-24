#include <iostream>

int main(void) {

	int size, best, acc, initBonus, initAcc, last, i;
	std::cin >> size;

	while (size != 0) {

		acc = 0;
		best = 0;
		initBonus = 0;
		initAcc = 0;
		last = 0;

		for  (i = 0; i < size; i++) {
			std::cin >> last;

			acc += last;
			if (acc < 0) acc = 0;
			if (acc > best) best = acc;

			initAcc += last;
			if (initAcc > initBonus) initBonus = initAcc;
		}

		std::cout << std::max(best, acc+initBonus) << '\n';
		std::cin >> size;

	}

	return 0;
}
