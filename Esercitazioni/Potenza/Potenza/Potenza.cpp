using namespace std;

#include <iostream>
#include "CalcoloPotenza.h"

int main()
{
	while (true) {

		double numero = 0.0;

		cout << "Che numero vorresti inserire? ";
		cin >> numero;

		cout << endl;

		double esponente = 0.0;

		cout << "A quanto vorresti elevare questo numero? ";
		cin >> esponente;

		cout << endl;

		cout << "Il risultato di questa elevazione a potenza è uguale a: " << calcoloPotenza(numero, esponente) << endl;

		cout << endl;
	}
}
