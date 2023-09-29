using namespace std;

#include<iostream>
#include<vector>

void calcoloSommaNumeriPari() {
	int numero = 0;

	cout << "Quanti numeri vorresti inserire? ";
	cin >> numero;

	vector<int>scatolaNumeri(numero);

	int i = 0;

	int numeriPari = 0, sommaNumeriPari = 0;

	for (i = 0; i < numero; i++) {
		cout << "Inserisci un numero: ";
		cin >> scatolaNumeri[i];

		if (scatolaNumeri[i] % 2 == 0) {
			numeriPari++;

			sommaNumeriPari += scatolaNumeri[i];
		}
	}

	cout << "La somma dei numeri pari inseriti nel vettore è uguale a: " << sommaNumeriPari << endl;
}