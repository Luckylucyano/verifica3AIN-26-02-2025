/*Es. 2 � Dato un array di numeri interi, immessi da tastiera, si calcoli e si stampi
la componente pi� grande e la componente pi� piccola e le relative posizioni 
all�interno dell�array*/
#pragma warning(disable:4996)//disabilito l'errore 4996 relativo alla funzione scanf
#include <stdio.h>//libreria input output standard
#include <stdlib.h>//libreria Standard
#define DIM 3//definisco la dimensione dell'array pi� grande perche in c non abbiamo la dinamicit�
int main() {
	int i, posmax=0, posmin=0, vett[DIM];//dichiaro le variabili i, posmax, posmin, vett[DIM] intere servono a contare i cicli e a memorizzare la posizione del numero pi� grande e del numero pi� piccolo e il vettore
	for(i = 0; i < DIM; i++){//ciclo for per inserire i numeri nell'array
		printf("Inserisci il %d numero: ", i + 1);//stampo a video la domanda da porre all'utente
		scanf("%d", &vett[i]);//acquisisco il valore inserito dall'utente
	}
	for (i = 1; i < DIM; i++) {//ciclo for per trovare il numero pi� grande e la sua posizione
		if (vett[i] > vett[posmax]) {//condizione per trovare il numero pi� grande
			posmax = i;//memorizzo la posizione del numero pi� grande
		}
		if (vett[i] < vett[posmin]) {//condizione per trovare il numero pi� piccolo
			posmin = i;//memorizzo la posizione del numero pi� piccolo
		}
	}
	printf("Il numero piu' grande e' %d in posizione %d e il numero piu' piccolo e' %d in posizione %d\n", vett[posmax], posmax, vett[posmin], posmin);//stampo a video il numero pi� grande e il numero pi� piccolo e le loro posizioni
}