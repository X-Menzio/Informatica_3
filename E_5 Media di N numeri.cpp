#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Media di N numeri
   Autore: Marchetti Matteo
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int n; // Numero preso in Input
	int somma; 
	int I; // Contatore
	int num; // Numero preso in Input
	int media; // Media dei numeri
	
	printf("Inserire un numero\n");
	scanf("%d", &n);
	somma=0;
	I=0;
	while(I<n){ // Ciclo che ripete finchè il contatore non è maggiore dei di N 
		printf("Inserire un' altro numero\n");
		scanf("%d", &num);
		somma=somma+num; // Fa la somma dei numerii presi in input
		I++; // Incremento il conntatore
	}
	media=somma/n;
	printf("La media dei numeri e'%d\n", media); // Stampo la media
	
	 system("PAUSE");
}
