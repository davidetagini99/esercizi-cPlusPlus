using namespace std;

#include <iostream>

#include "CalcoloFattoriale.h"
#include "SommaNumeriPari.h"
#include "CalcoloMCD.h"

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
    while (true) {
        int sceltaUtente = 0;

        cout << "Benvenuto in questo programma, in cui puoi scegliere se calcolare: il fattoriale, la somma, l'MCD tra due numeri. Premi INVIO per continuare: ";
        cin.ignore();

        clearInputBuffer();

        cout << "Premi 1 per calcolare il fattoriale del numero inserito" << endl;
        cout << "Premi 2 per eseguire la somma dei numeri pari inseriti in un vettore" << endl;
        cout << "Premi 3 per calcolare l'MCD tra due numeri inseriti" << endl;
        cout << "Premi 4 per uscire dal programma" << endl;

        cout << endl;

        cin >> sceltaUtente;

        // calcolo MCD parametri
        int numero1 = 0, numero2 = 0, trovaMCD = 0;

        // calcolo fattoriale parametri
        int numero = 0;

        char gestioneUscita = 'a';

        switch (sceltaUtente) {
            case 1:
                gestioneCalcoloFattoriale(numero);
                break;
            case 2:
                cout << endl;
                calcoloSommaNumeriPari();
                break;
            case 3:
                cout << endl;
                calcoloMCD(numero1, numero2, trovaMCD);
                break;
            case 4:
                cout << endl;
                cout << "Vuoi uscire dal programma? y/n ";
                
                cin >> gestioneUscita;
                
                if (gestioneUscita == 'y') {
                    return 0;
                }
                else if (gestioneUscita == 'n') {
                    continue;
                }

                break;
        }

        cout << endl;

        cout << endl;
    }
}
