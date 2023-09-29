using namespace std;

#include <iostream>

void calcoloMCD(int numero1Passato, int numero2Passato, int risultatoMCD) {

	cout << "Inserisci il primo numero: ";
	cin >> numero1Passato;

	cout << endl;

	cout << "Inserisci il secondo numero: ";
	cin >> numero2Passato;

	cout << endl;

	while (numero2Passato != 0) {
		risultatoMCD = numero1Passato % numero2Passato;
		numero1Passato = numero2Passato;
		numero2Passato = risultatoMCD;
	}

	cout << "Il massimo comune divisore tra i due numeri inseriti è uguale a: " << numero1Passato << endl;
}