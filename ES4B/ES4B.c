/*Es. 4 - Scrivere un programma che permetta di ruotare un array di numeri interi verso sinistra di un
numero n di posizioni(n va normalizzata) usa una variabile di appoggio e non un vettore*/
#pragma warning(disable:4996)//disabilito l'errore 4996 relativo alla funzione scanf
#include <stdio.h>//libreria input output standard
#include <stdlib.h>//libreria Standard
#define DIM 5//definisco la dimensione dell'array
int main() {
	int i, n, vett[DIM], app;//dichiaro le variabili i, n, vett[DIM] e app intere, i serve per contare i cicli, n per la rotazione dell'array, vett[DIM] per memorizzare i numeri e app per la variabile di appoggio
	for (i = 0; i < DIM; i++) {//ciclo for per inserire i numeri nell'array
		printf("Inserisci il %d numero: ", i + 1);//stampo a video la domanda da porre all'utente
		scanf("%d", &vett[i]);//acquisisco il valore inserito dall'utente
	}
	printf("Di quante posizioni vuoi ruotare l'array? ");//stampo a video la domanda da porre all'utente
	scanf("%d", &n);//acquisisco il valore inserito dall'utente
	n %= DIM;//normalizzo il valore di n
	for (i = 0; i < n; i++) {//ciclo for per ruotare l'array
		app = vett[DIM - 1];//salvo l'ultimo numero dell'array in app
		for (int j = DIM - 1; j > 0; j--) {//ciclo for per spostare i numeri dell'array
			vett[j] = vett[j - 1];//sposto i numeri dell'array
		}
		vett[0] = app;//inserisco il numero salvato in app nella prima posizione dell'array
	}
	for (i = 0; i < DIM; i++) {//ciclo for per stampare l'array ruotato
		printf("%d ", vett[i]);//stampo a video l'array ruotato
	}
	return 0;//ritorno 0 per indicare che il programma ha funzionato correttamente
}