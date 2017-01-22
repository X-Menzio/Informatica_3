#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Vettore
   Autore: Marchetti Matteo
   Data: 16/01/2017
   Classe: 3INA
   Versione 1.0*/

  int main() {
  	
  	int n1;
  	int n2;
  	int n;
  	int somma;
  	int somma1;
  	int media;
  	int I;
  	int v[1000];
  	
  	do{
  		printf("Inserire un numero (n2) che deve essere minore di 1000 e maggiore di 0\n");
  		scanf("%d", &n2);
	  }while(!(n2<1000)&&(n2>0));
	  
	do{
		printf("Inserire un numero che deve essere maggiore di 0 ma minore di n2\n");
		scanf("%d", &n1);
	}while(!(n1>0)&&(n1<n2));
	
	do{
		printf("Inserire un'altro numero che deve essere compreso tra i numeri inseriti in precedenza\n");
		scanf("%d", &n);
	}while(!(n1<n)&&(n<n2));
	
	for(I=0;I<n;I++){
		printf("Inserire un numero\n");
		scanf("%d", &v[1]);
		 
		if(I%2!=0){
			somma1=somma1+v[I];
			media++;
		}
		if((v[I]%2==0)||(v[I]==0)){
			somma=somma+v[I];
		} 
	}
	  media=somma1/media;
	  printf("La somma e'\n%d",somma);
	  printf("La media e'\n%d", media);
}
	  
	
	
	
	
	
	
	
	
  	
