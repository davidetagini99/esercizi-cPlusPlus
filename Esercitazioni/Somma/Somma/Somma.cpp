using namespace std;

#include <iostream>
#include<vector>

int main()
{
    while (true) {
        int numero = 0;

        cout << "Quanti numeri vorresti inserire? ";
        cin >> numero;

        cout << endl;

        vector<int>vettore_numeri(numero);

        int i = 0;

        int sommaNumeri = 0;

        for (i = 0; i < numero; i++) {
            cout << "Inserisci numero: ";
            cin >> vettore_numeri[i];

            sommaNumeri += vettore_numeri[i];

            if (vettore_numeri[i] == 0) {
                break;
            }
        }

        cout << endl;

        cout << "La somma dei numeri inseriti è uguale a: " << sommaNumeri << endl;

        cout << endl;
    }
}
