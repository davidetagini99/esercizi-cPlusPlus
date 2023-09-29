#include <iostream>
#include <string>

using namespace std;

const string zodiaci[] = { "Capricorno", "Acquario", "Pesci", "Ariete", "Toro", "Gemelli",
                          "Cancro", "Leone", "Vergine", "Bilancia", "Scorpione", "Sagittario" };

int giorno = 0, mese = 0;

int main() {

    while (true) {

        cout << "Premi 1 per calcolare il tuo segno zodiacale" << endl;
        cout << "Premi 2 per uscire dal programma" << endl;

        int sceltaUtente = 0;

        cin >> sceltaUtente;

        switch (sceltaUtente) {
        case 1:
            cout << "Inserisci il giorno di nascita: ";
            cin >> giorno;

            if (giorno == 0 || giorno > 31) {
                cout << endl;
                cout << "Errore, la data inserita non è valida";
            }
            else {
                cout << "Inserisci il mese di nascita (in numero): ";
                cin >> mese;

                if (mese == 0 || mese > 12) {
                    cout << endl;
                    cout << "Errore, la data inserita non è valida";
                }
                else {
                    cout << endl;

                    int indice = (mese - 1 + (giorno >= 21 ? 1 : 0) + 12) % 12;

                    cout << "Il tuo segno zodiacale è: " << zodiaci[indice] << endl;
                }
            }
            break;
        case 2:
            cout << "Vuoi uscire dal programma? y/n ";
            char confermaUscita;
            cin >> confermaUscita;
            if (confermaUscita == 'y') {
                return 0;
            }
            break;
        }

        cout << endl;
    }
}
