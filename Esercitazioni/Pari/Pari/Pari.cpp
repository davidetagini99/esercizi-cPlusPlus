using namespace std;

#include <iostream>
#include<vector>

int main()
{
	while (true) {
		int numero = 0;

		cout << "Quanti numeri vuoi inserire? ";
		cin >> numero;

		vector<int>scatolaNumeri(numero);

		int i = 0;

		cout << endl;

		int numeriPariInScatola = 0;

		for (i = 0; i < numero; i++) {
			cout << "Inserisci numero: ";
			cin >> scatolaNumeri[i];

			if (scatolaNumeri[i] % 2 == 0) {
				numeriPariInScatola++;
			}
		}

		cout << endl;

		cout << "I numeri pari presenti in questo vettore sono: " << numeriPariInScatola << endl;

		cout << endl;
	}
}
