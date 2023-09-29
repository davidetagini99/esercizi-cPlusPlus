#include<cmath>

double calcoloPotenza(double numeroPassato, double esponentePassato) {

	cout << "Inserisci il numero: ";
	cin >> numeroPassato;

	cout << endl;

	cout << "Inserisci l'esponente: ";
	cin >> esponentePassato;

	cout << endl;

	double operazioneCalcoloPotenza = pow(numeroPassato, esponentePassato);

	return operazioneCalcoloPotenza;
}