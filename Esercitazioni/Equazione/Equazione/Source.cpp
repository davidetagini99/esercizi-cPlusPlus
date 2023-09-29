using namespace std;

#include<iostream>
#include<cmath>

int main() {
	while (true) {
		float coeffUno = 0.0f, coeffDue = 0.0f, coeffTre = 0.0f;

		cout << "Inserisci il primo coefficiente dell'equazione: ";
		cin >> coeffUno;

		cout << endl;

		cout << "Inserisci il secondo coefficiente dell'equazione: ";
		cin >> coeffDue;

		cout << endl;

		cout << "Inserisci il terzo coefficiente dell'equazione: ";
		cin >> coeffTre;

		cout << endl;

		float calcoloDelta = 0.0f;

		calcoloDelta = (coeffDue * coeffDue) - 4 * (coeffUno * coeffTre);

		float x1 = 0.0f, x2 = 0.0f;

		float xUguale = 0.0f;

		if (calcoloDelta > 0) {
			x1 = (-coeffDue + sqrt(calcoloDelta)) / (2 * coeffUno);
			x2 = (-coeffDue - sqrt(calcoloDelta)) / (2 * coeffUno);

			cout << "Il risultato del calcolo sulle incognite dell'equazione di secondo grado con delta maggiore di zero è uguale a: " << x1 << " " << x2 << endl;
		}
		else if (calcoloDelta == 0) {
			xUguale = (-coeffDue) / (2 * coeffUno);
		}
		else if (calcoloDelta < 0) {
			cout << "Non è possibile risolvere questa equazione di secondo grado" << endl;
		}

		cout << endl;

		char gestioneUscita = 'a';

		cout << "Vuoi uscire dal programma? y/n ";
		cin >> gestioneUscita;

		cout << endl;

		if (gestioneUscita == 'y') {
			return 0;
		}
		else if (gestioneUscita == 'n') {
			continue;
		}
	}
}