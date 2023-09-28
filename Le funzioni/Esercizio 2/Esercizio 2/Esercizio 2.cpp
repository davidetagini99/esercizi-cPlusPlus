using namespace std;

#include <iostream>

double calcoloAreaRettangolo(double baseRettangolo, double altezzaRettangolo) {
    double operazioneCalcoloAreaRettangolo = baseRettangolo * altezzaRettangolo;

    return operazioneCalcoloAreaRettangolo;
}

int main()
{
    while (true) {
        double insBaseRettangolo = 0.0, insAltezzaRettangolo = 0.0;

        cout << "Inserisci la base del rettangolo: ";
        cin >> insBaseRettangolo;

        cout << endl;

        cout << "Inserisci l'altezza del rettangolo: ";
        cin >> insAltezzaRettangolo;

        cout << endl;

        cout << "Il risultato dell'area di questo rettangolo è: " << calcoloAreaRettangolo(insBaseRettangolo, insAltezzaRettangolo);

        cout << endl;
        cout << endl;
    }
}
