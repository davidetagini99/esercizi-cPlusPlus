#include <iostream>

int main()
{
	while (true) {
		float rx = 0.0f, xr = 0.0f, sum = 0.0;

		do {
			std::cout << "Inserisci la resistenza: ";

			std::cin >> rx;

			std::cout << std::endl;

			if (rx == 0.0f) {
				std::cout << std::endl;
				break;
			}
			else {
				if (rx) {
					xr = 1 / rx;
					sum += xr;
				}
			}
		} while (rx);

		std::cout << std::endl;

		if (sum) {
			std::cout << 1 / sum;
		}
	}
}
