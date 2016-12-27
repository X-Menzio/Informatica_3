#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Dati dei numeri trovare il minimo
   Autore: Marchetti Matteo
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int n;
	int I;
	int num;
	int min;
	
	printf("Inserire il numero dei numeri da calcolare\n");
	scanf("%d", &n);
	
	I=0;
	printf("Inserire un altro numero\n");
	scanf("%d", &num);
	
	min=num;
	while(I<n){
		printf("Inserire un numero\n");
		scanf("%d", &num);
		while(num<min){
			min=num;
		}
		I++;
	}
	printf("Il numero minore e'%d \n", min);
	
	system("PAUSE");
}
