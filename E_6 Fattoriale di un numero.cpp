#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Il fattoriale di un numero
   Autore: Marchetti Matteo
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int fattoriale;
	int n;
	int I;
	
	printf("Inserire un numero\n");
	scanf("%d", &n);

	fattoriale=1; // Inizializzo variabile
	
	for(I=n; I>0; I--){ // Ripeto il ciclo fino a che I è maggiore di 0 
		fattoriale=fattoriale*I;
	}
	printf("Il fattoriale del numero e'\n %d", fattoriale);
	
	system("PAUSE");
	
}
