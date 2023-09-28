using namespace std;

#include <iostream>

int restituzioneNumeroMaggiore(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n2 > n1) {
		return n2;
	}
}

int main()
{
	while (true) {
		int numero1 = 0, numero2 = 0;

		cout << "Inserisci il primo numero: ";
		cin >> numero1;

		cout << std::endl;

		cout << "Inserisci il secondo numero: ";
		cin >> numero2;

		cout << std::endl;

		cout << "Il numero maggiore tra i due inseriti è: " << restituzioneNumeroMaggiore(numero1, numero2);

		cout << std::endl;
		cout << std::endl;
	}
}
