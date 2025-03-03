/*Es. 4 – Scrivere un programma che cerca con l’algoritmo corretto un numero all’interno di un vettore
di N elementi inseriti casualmente (valori da 1 a 10), lo riordina, stampa a video, quante volte
compare e in che posizioni*/
#pragma warning(disable:4996)//disabilito l'errore 4996 relativo alla funzione scanf
#include <stdio.h>//libreria input output standard
#include <stdlib.h>//libreria Standard
#include <time.h>//libreria per il tempo
#define N 10//definisco la dimensione dell'array
int main() {
	int i, j, n, vett[N], app, cont = 0, scambi,trovabile=1;//dichiaro le variabili i, j, n, vett[N], app e cont intere, i e j servono per contare i cicli, n per il numero da cercare, vett[N] per memorizzare i numeri, app per la variabile di appoggio e cont per contare quante volte compare il numero cercato
	srand(time(NULL));//inizializzo il generatore di numeri casuali facendo partire il tempo
	for (i = 0; i < N; i++) {//ciclo for per inserire i numeri casuali nell'array
		vett[i] = rand() % 10 + 1;//inserisco i numeri casuali nell'array
	}
	do {//bubblesort con sentinella
		scambi = 0;//inizializzo la variabile scambi a 0
		for (i = 0; i < N - 1; i++) {//ciclo for per ordinare l'array
			if (vett[i] > vett[i + 1]) {//condizione per ordinare l'array
				app = vett[i];//salvo il numero in app
				vett[i] = vett[i + 1];//sposto il numero
				vett[i + 1] = app;//inserisco il numero salvato in app
				scambi = 1;//se ho scambiato i numeri allora scambi diventa 1
			}
		}
	} while (scambi);//condizione del ciclo do while (scambi==1) ovvero array da ordinare
	for (i = 0; i < N; i++) {//ciclo for per stampare l'array ordinato
		printf("%d ", vett[i]);//stampo a video l'array ordinato
	}
	printf("\nInserisci il numero da cercare: ");//stampo a video la domanda da porre all'utente
	scanf("%d", &n);//acquisisco il valore che l'utente vuole cercare
	i = 0;
	while (trovabile == 1 && i < N) {//ciclo while per cercare il numero nell'array ordinato
		if (vett[i] == n) {//condizione per trovare il numero
			cont++;//incremento il contatore
		}
		else if (vett[i] > n) {//condizione per capire se il numero cercato è presente nell'array
			trovabile = 0;//se il numero non è presente trovabile diventa 0
		}
		i++;//incremento i
	}
	if (cont == 0) {//condizione per capire se il numero cercato è presente nell'array
		printf("Il numero non e' presente nell'array\n");//stampo a video che il numero non è presente nell'array
	}
	else {//altrimenti
		printf("Il numero %d e' presente %d volte nell'array\n", n, cont);//stampo a video il numero cercato e quante volte è presente nell'array
	}
	return 0;//ritorno 0 per indicare che il programma ha funzionato correttamente
}