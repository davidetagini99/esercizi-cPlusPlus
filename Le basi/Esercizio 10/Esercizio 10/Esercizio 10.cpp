#include <iostream>

int calcolaMCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int calcolaMCM(int a, int b) {
	return (a * b) / calcolaMCD(a, b);
}

int main()
{
	while (true) {
		int n1 = 0, n2 = 0, n3 = 0;

		std::cout << "Inserisci il primo numero: ";
		std::cin >> n1;

		std::cout << std::endl;

		std::cout << "Inserisci il secondo numero: ";
		std::cin >> n2;

		std::cout << std::endl;

		std::cout << "Inserisci il terzo numero: ";
		std::cin >> n3;

		std::cout << std::endl;

		int calcoloMinimoComuneMultiploIniziale = 0;

		calcoloMinimoComuneMultiploIniziale = calcolaMCM(n1, n2);

		int calcoloMinimoComuneMultiploFinale = 0;

		calcoloMinimoComuneMultiploFinale = calcolaMCM(calcoloMinimoComuneMultiploIniziale, n3);

		std::cout << "L'MCM tra i due numeri inseriti da tastiera è: " << calcoloMinimoComuneMultiploFinale << std::endl;

		std::cout << std::endl;
	}
}
