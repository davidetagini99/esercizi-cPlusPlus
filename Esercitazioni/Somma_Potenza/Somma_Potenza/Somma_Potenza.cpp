using namespace std;

#include <iostream>
#include "CalcoloSomma.h"
#include "CalcoloPotenza.h"


void clearInputBuffer()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
    while (true) {
        int sceltaUtente = 0;

        cout << "Benvenuto in questo programma, puoi scegliere con i tasti numerici se effettuare una somma tra 10 numeri, oppure un elevamento a potenza. Premi INVIO per continuare: ";
        cin.ignore();

        cout << endl;

        cout << "Premi 1 per calcolare la somma tra i 10 numeri" << endl;
        cout << "Premi 2 per calcolare l'elevamento a potenza di un numero, con un esponente da te scelto" << endl;
        cout << "Premi 3 per uscire dal programma" << endl;

        cout << endl;

        cin >> sceltaUtente;

        int numero = 0;

        double numeroPotenza = 0.0;
        double esponente = 0.0;

        char uscitaProgramma = 'a';

        switch (sceltaUtente) {
            case 1:
                cout << endl;
                cout << "Il risultato della somma dei 10 numeri inseriti è uguale a: " << calcoloSomma(numero) << endl;
                cout << endl;
                break;
            case 2:
                cout << endl;
                cout << "Il risultato dell'elevamento a potenza di questo numero è uguale a: " << calcoloPotenza(numeroPotenza, esponente) << endl;
                break;
            case 3:
                cout << endl;
                cout << "Vuoi uscire dal programma? y/n ";
                cin >> uscitaProgramma;
                if (uscitaProgramma == 'y') {
                    cout << endl;
                    cout << "Hai scelto di chiudere questo programma" << endl;
                    return 0;
                }
                else if (uscitaProgramma == 'n') {
                    clearInputBuffer();
                    cout << endl;
                    cout << "Hai deciso di continuare ad usare questo programma" << endl;
                    cout << endl;
                    continue;
                }
                break;
                
        }

        cout << endl;

        clearInputBuffer();

        cout << endl;
    }
}
