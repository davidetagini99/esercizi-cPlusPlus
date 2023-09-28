using namespace std;

#include <iostream>

float calcoloPerimetroRettangolo(float baseRettangolo, float altezzaRettangolo) {
	float risultatoPerimetroRettangolo = 2 * (baseRettangolo + altezzaRettangolo);

	return risultatoPerimetroRettangolo;
}

int main()
{
	while (true) {
		float insBaseRettangolo = 0.0f, insAltezzaRettangolo = 0.0f;

		cout << "Inserisci la base del rettangolo: ";
		cin >> insBaseRettangolo;

		cout << endl;

		cout << "Inserisci l'altezza del rettangolo: ";
		cin >> insAltezzaRettangolo;

		cout << endl;

		cout << "Il risulato del perimetro del rettangolo è di: " << calcoloPerimetroRettangolo(insBaseRettangolo, insAltezzaRettangolo);

		cout << endl;
		cout << endl;
	}
}
