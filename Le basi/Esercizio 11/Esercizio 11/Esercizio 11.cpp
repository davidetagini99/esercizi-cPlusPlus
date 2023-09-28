#include <iostream>

int main()
{
	while (true) {
		int i = 0, p = 0, x = 0, y = 0; // i numeri possono essere fissi, oppure dinamici, questi sono i valori dei numeri fissi: 3, 5

		std::cout << "Inserisci il primo numero: ";
		std::cin >> x;

		std::cout << std::endl;

		std::cout << "Inserisci il secondo numero: ";
		std::cin >> y;

		std::cout << std::endl;

		do {
			p += x;
			i++;
		} while (i < y);

		std::cout << "Risultato: " << p << std::endl;

		std::cout << std::endl;
	}

	
}
