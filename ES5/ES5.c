/*Es. 5 – Scrivere un programma che inseriti in un array di N elementi dei numeri, 
dopo averli ordinati in modo decrescente, calcoli il prodotto dei numeri contenuti nell’array*/
#pragma warning(disable:4996)//disabilito l'errore 4996 relativo alla funzione scanf
#include <stdio.h>//libreria input output standard
#include <stdlib.h>//libreria Standard
#include <time.h>//libreria per il tempo
#define N 5//definisco la dimensione dell'array
int main() {//funzione principale
	int i, vett[N], app, prodotto = 1, scambi;//dichiaro le variabili i, vett[N], app e prodotto intere, i e j servono per contare i cicli, vett[N] per memorizzare i numeri, app per la variabile di appoggio e prodotto per memorizzare il prodotto dei numeri
	srand(time(NULL));//inizializzo il generatore di numeri casuali facendo partire il tempo
	for (i = 0; i < N; i++) {//ciclo for per inserire i numeri nell'array
		vett[i] = rand();//inserisco i numeri casuali nell'array
	}
	do {//bubblesort con sentinella
		scambi = 0;//inizializzo la variabile scambi a 0
		for (i = 0; i < N - 1; i++) {//ciclo for per ordinare l'array
			if (vett[i] < vett[i + 1]) {//condizione per ordinare l'array
				app = vett[i];//salvo il numero in app
				vett[i] = vett[i + 1];//sposto il numero
				vett[i + 1] = app;//inserisco il numero salvato in app
				scambi = 1;//se ho scambiato i numeri allora scambi diventa 1
			}
		}
	} while (scambi);//condizione del ciclo do while (scambi==1) ovvero array da ordinare
	for (i = 0; i < N; i++) {//ciclo for per calcolare il prodotto dei numeri nell'array
		prodotto *= vett[i];//calcolo il prodotto dei numeri nell'array
		printf("%d ", vett[i]);//stampo a video i numeri nell'array ordinati in ordine decrescente
	}
	printf("Il prodotto dei numeri inseriti e' %d\n", prodotto);//stampo a video il prodotto dei numeri nell'array
	return 0;//ritorno 0 per indicare che il programma ha funzionato
}