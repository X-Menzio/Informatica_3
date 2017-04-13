#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Caricamento di un array e stampa inversa
   Autore: Marchetti Matteo
   Data: 13/04/2017
   Classe: 3INA
   Versione 1.0*/
   
int main(){
	int X;
	int vet[20];
	
	for(X=0;X<10;X++){
		printf("Inserire un numero\n");
		scanf("%d", &vet[X]);
	}
	for(X=9;X>=0;X--){
		if(vet[X]!=0){
		printf("\n%d",vet[X]);
	     }
	}
}
