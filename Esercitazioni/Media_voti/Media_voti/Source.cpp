using namespace std;

#include<iostream>

int main() {
	while (true) {
		int numeroAlunni = 0;

		cout << "Da quanti alunni è composta la classe? ";
		cin >> numeroAlunni;

		cout << endl;

		int i = 0;

		int votiVerificaAlunni = 0;

		int sommaVotiAlunni = 0, mediaVotiAlunni = 0;

		for (i = 0; i < numeroAlunni; i++) {
			cout << "Inserisci un voto: ";
			cin >> votiVerificaAlunni;

			sommaVotiAlunni += votiVerificaAlunni;
		}

		mediaVotiAlunni = sommaVotiAlunni / numeroAlunni;

		cout << endl;

		cout << "La media dei voti di questo compito in classe per questa sezione di alunni è uguale a: " << mediaVotiAlunni << endl;

		cout << endl;

		char gestioneUscita = 'a';

		cout << "Vuoi uscire dal programma? y/n ";
		cin >> gestioneUscita;

		if (gestioneUscita == 'y') {
			return 0;
		}
		else if (gestioneUscita == 'n') {
			continue;
		}
	}
}