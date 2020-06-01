#include <iostream>

int compara(int x1, int y1, int r1,
		int x2, int y2, int r2)
{
	int distSq = (x1 - x2) * (x1 - x2) +
		(y1 - y2) * (y1 - y2);
	int radSumSq = (r1 + r2) * (r1 + r2);
	if (distSq >= radSumSq)
		return 0;
	return 1;
}

int caso() {
	int sombrillas;
	int i, j;
	int solapes = 0;

	std::cin >> sombrillas;
	int xs[sombrillas];
	int ys[sombrillas];
	int rs[sombrillas];
	for (i = 0; i < sombrillas; i++) {
		std::cin >> xs[i];
		std::cin >> ys[i];
		std::cin >> rs[i];
	}
	if (sombrillas < 2) {
		return 0;
	}
	for (i = 0; i < sombrillas-1; i++) {
		for (j = i+1; j < sombrillas; j++) {
			if (compara(xs[i], ys[i], rs[i], xs[j], ys[j], rs[j]))
				solapes++;
		}
	}
	return solapes;
}

int main() {
	int casos;
	for (std::cin >> casos; casos > 0; casos--) {
		std::cout << caso() << std::endl;
	}
	return 0;
}
