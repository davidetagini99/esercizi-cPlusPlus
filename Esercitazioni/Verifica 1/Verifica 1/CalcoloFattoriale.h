using namespace std;

#include<iostream>

unsigned long long calcolaFattoriale(int numero); // parametro da passare nel return del metodo che gestisce il calcolo del fattoriale

unsigned long long calcolaFattoriale(int numero) {
	if (numero == 0 || numero == 1) {
		return 1;
	}
	else {
		return numero * calcolaFattoriale(numero - 1);
	}
}

void gestioneCalcoloFattoriale(int numeroPassato) {
	cout << "Inserisci un numero: ";
	cin >> numeroPassato;

	cout << endl;

	cout << "Il risultato del calcolo del fattoriale del numero inserito è uguale a: " << calcolaFattoriale(numeroPassato);
}
