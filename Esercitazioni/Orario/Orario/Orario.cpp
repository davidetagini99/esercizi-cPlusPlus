using namespace std;

#include <iostream>

void stampaOrarioSettimanale() { // orario uguale per tutti i giorni
	cout << "Orario continuato dal lunedì alla domenica: 09:00 / 22:00" << endl;
}

int main()
{
	while (true) {
		cout << "Premi 1 per l'orario del lunedì" << endl;
		cout << "Premi 2 per l'orario del martedì" << endl;
		cout << "Premi 3 per l'orario del mercoledì" << endl;
		cout << "Premi 4 per l'orario del giovedì" << endl;
		cout << "Premi 5 per l'orario del venerdì" << endl;
		cout << "Premi 6 per l'orario del sabato" << endl;
		cout << "Premi 7 per l'orario della domenica" << endl;
		cout << "Premi 8 per uscire dal programma" << endl;

		cout << endl;

		int sceltaUtente = 0;

		cin >> sceltaUtente;

		cout << endl;

		char gestioneUscita = 'a';

		switch (sceltaUtente) {
			case 1:
				stampaOrarioSettimanale();
				break;
			case 2:
				stampaOrarioSettimanale();
				break;
			case 3:
				stampaOrarioSettimanale();
				break;
			case 4:
				stampaOrarioSettimanale();
				break;
			case 5:
				stampaOrarioSettimanale();
				break;
			case 6:
				stampaOrarioSettimanale();
				break;
			case 7:
				stampaOrarioSettimanale();
				break;
			case 8:
				cout << "Vuoi uscire dal programma? y/n ";
				cin >> gestioneUscita;

				cout << endl;

				if (gestioneUscita == 'y') {
					cout << endl;
					return 0;
				}
				else if (gestioneUscita == 'n') {
					cout << endl;
					continue;
				}
				else {
					cout << endl;
					cout << "Il carattere che hai inserito non è valido";
				}

				break;
		}

		cout << endl;
	}
}
