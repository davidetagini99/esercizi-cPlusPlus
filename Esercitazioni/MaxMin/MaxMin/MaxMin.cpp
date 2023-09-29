using namespace std;

#include<iostream>

int main() {
	while (true) {
		int numero = 0;

		cout << "Inserisci un numero: ";
		cin >> numero;

		cout << endl;

		int max = 0, min = 0;

		while (numero != 0) {
			cout << "Inserisci un numero: ";
			cin >> numero;

			if (numero > max) {
				max = numero;
			}
			else if (numero < min) {
				min = numero;
			}
		}

		cout << endl;

		cout << "Il numero massimo inserito in questa sequenza di numeri è uguale a: " << max << endl;

		cout << endl;

		cout << "Il numero minimo inserito in questa sequenza di numeri è uguale a: " << min << endl;

		cout << endl;
	}
}