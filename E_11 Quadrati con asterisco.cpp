#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Quadrato
   Autore: Marchetti Matteo
   Data: 13/04/2017
   Classe: 3INA
   Versione 1.0*/
   
int main(){
	int n;
	int I;
	int K;
	
	printf("\n Inserire un numero\n");
	scanf("%d", &n);
	for (I=0;I<n;I++){
		for (K=0;K<n;K++)	printf("*");
		printf("\n");
	}
}
