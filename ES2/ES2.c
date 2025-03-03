/*Es. 2 – Dato un array di numeri interi, immessi da tastiera, si calcoli e si stampi
la componente più grande e la componente più piccola e le relative posizioni 
all’interno dell’array*/
#pragma warning(disable:4996)//disabilito l'errore 4996 relativo alla funzione scanf
#include <stdio.h>//libreria input output standard
#include <stdlib.h>//libreria Standard
#define DIM 3//definisco la dimensione dell'array più grande perche in c non abbiamo la dinamicità
int main() {
	int i, posmax=0, posmin=0, vett[DIM];//dichiaro le variabili i, posmax, posmin, vett[DIM] intere servono a contare i cicli e a memorizzare la posizione del numero più grande e del numero più piccolo e il vettore
	for(i = 0; i < DIM; i++){//ciclo for per inserire i numeri nell'array
		printf("Inserisci il %d numero: ", i + 1);//stampo a video la domanda da porre all'utente
		scanf("%d", &vett[i]);//acquisisco il valore inserito dall'utente
	}
	for (i = 1; i < DIM; i++) {//ciclo for per trovare il numero più grande e la sua posizione
		if (vett[i] > vett[posmax]) {//condizione per trovare il numero più grande
			posmax = i;//memorizzo la posizione del numero più grande
		}
		if (vett[i] < vett[posmin]) {//condizione per trovare il numero più piccolo
			posmin = i;//memorizzo la posizione del numero più piccolo
		}
	}
	printf("Il numero piu' grande e' %d in posizione %d e il numero piu' piccolo e' %d in posizione %d\n", vett[posmax], posmax, vett[posmin], posmin);//stampo a video il numero più grande e il numero più piccolo e le loro posizioni
}