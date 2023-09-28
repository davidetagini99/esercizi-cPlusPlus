#include <iostream>

unsigned long long calcoloFattoriale(int numeroPassato) {
	if (numeroPassato < 0) {
		return 0;
	}

	unsigned long long fattoriale = 1;

	for (int i = 1; i <= numeroPassato; i++) {
		fattoriale *= i;
	}

	return fattoriale;
}

int main()
{
	while (true) {
		int numero = 0;

		std::cout << "Inserisci un numero: ";
		std::cin >> numero;

		unsigned long long risultatoCalcoloFattoriale = calcoloFattoriale(numero);

		std::cout << "Il fattoriale di " << numero << " " << "è: " << risultatoCalcoloFattoriale << std::endl;

		std::cout << std::endl;
	}
}
