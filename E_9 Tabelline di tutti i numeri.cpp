#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Tabellina di tutti i numeri
   Autore: Marchetti Matteo
   Data: 16/12/2016
   Classe: 3INA
   Versione 1.0*/

  int main()
{
	int n;
	int tab;
	int I;
	
	n=2;
	tab=0;
	while(n<=10){
		for(I=0;I<=10;I++){
			
			tab=n*I;
			printf("La tabellina e' %d ", tab);
			
		}
		printf("\n");
		n++;
	}
}
