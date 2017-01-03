#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Indovina numero
   Autore: Marchetti Matteo
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int n_c;
	int indovinato;
	int I;
	int n_u;
	
	n_c=rand()%15;
	indovinato=0;
	I=10;
	do{
    	printf("Inserire un numero\n");
    	scanf("%d", &n_u);
	
		if(n_u==n_c){
			indovinato=1;
		}
			I--; 
	}while((I>0)&&(indovinato=0));
	if(indovinato==1){
		printf("Hai vinto\n");
	}else{
		printf("Hai perso\n");
		
	}
	system("PAUSE");
}
