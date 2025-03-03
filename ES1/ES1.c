/*Es. 1- Scrivi un programma che, memorizzi in un array tanti numeri casuali compresi tra -1000 e
1000, quanti ne vuole l’utente, stando attento a non sforare la dimensione massima dell’array,
calcola e stampa la media utilizzando una sola variabile media (non è concesso l’uso della variabile
somma)*/
#pragma warning(disable:4996)//disabilito l'errore 4996 relativo alla funzione scanf
#include <stdio.h>//libreria input output standard
#include <stdlib.h>//libreria Standard
#include <time.h>//libreria per il tempo
#define DIM 1000//definisco la dimensione dell'array più grande perche in c non abbiamo la dinamicità
int main() {//funzione principale
	int n, i;//dichiaro le variabili n e i intere, n serve per la dimensione dell'array e i per il ciclo for
	float media = 0;//dichiaro la variabile media float e la inizializzo a 0 serve per calcolare la media
	int vett[DIM];//dichiaro l'array vett di dimensione DIM	di interi
	srand(time(NULL));//inizializzo il generatore di numeri casuali facendo partire il tempo
	do {//ciclo do while per chiedere all'utente quanti numeri vuole inserire nell'array cosi da non sforare la dimensione massima dell'array
		printf("Quanti numeri vuoi inserire nell'array? ");//stampo a video la domanda da porre all'utente
		scanf("%d", &n);//acquisisco il valore inserito dall'utente
	} while (n < 1 || n > DIM);//condizione del ciclo do while vista sopra
	for (i = 0; i < n; i++) {	//ciclo for per inserire i numeri casuali nell'array
		vett[i] = rand() % 2001 - 1000;//inserisco i numeri casuali nell'array
		media += vett[i];//eseguo la somma dei numeri inseriti nell'array
	}
	media /= n;//calcolo la media dei numeri inseriti nell'array
	printf("La media dei numeri inseriti e' %.2f\n", media);//stampo a video la media dei numeri inseriti nell'array
	return 0;//ritorno 0 per indicare che il programma ha funzionato correttamente
}//fine funzione main