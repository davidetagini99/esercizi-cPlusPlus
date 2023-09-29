int calcoloSomma(int numeroPassato) {
	int i = 0;

	int sommaNumeri = 0;

	for (i = 0; i <= 10; i++) {
		cout << "Inserisci un numero: ";
		cin >> numeroPassato;

		sommaNumeri += numeroPassato;
	}

	return sommaNumeri;
}