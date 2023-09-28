#include <iostream>
#include<vector>

int main()
{
	while (true) {
		int numeri_inseriti;

		std::cout << "Scegli la quantità di numeri che vorresti inserire: ";
		std::cin >> numeri_inseriti;

		if (numeri_inseriti == 0) {
			std::cout << "Arrivederci" << std::endl;
			break;
		}

		std::cout << std::endl;

		std::vector<int> numeri(numeri_inseriti);

		int sommaNumeri = 0, mediaNumeri = 0;

		int i = 0;

		for (i = 0; i < numeri_inseriti; i++) {
			std::cout << "Inserisci un numero: ";
			std::cin >> numeri[i];

			sommaNumeri += numeri[i];
		}

		std::cout << "Somma dei numeri: " << sommaNumeri << std::endl;

		std::cout << std::endl;

		mediaNumeri = sommaNumeri / numeri_inseriti;

		std::cout << "Media dei numeri: " << mediaNumeri << std::endl;

		std::cout << std::endl;
	}
}
