#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: 
   Autore: Marchetti Matteo
   Data: 16/01/2017
   Classe: 3INA
   Versione 1.0*/

  int main(){
  	int n1; // Numero preso in input che deve essere maggiore di 0 e minore di n2
  	int n2; // Numero preso in input che deve essere minore di 1000 e maggiore di 0
  	int n;  // Numero compreso tra n1 e n2
  	int I; // Contatore
  	int somma1;// 
  	int somma; // Somma degli elementi pari
  	int media; // Media degli elementi dispari
  	int v[1000]; // vettore
  	
  	do{
  		printf("Inserie n2 che deve essere minore di 1000 ma maggiore di 0\n");  
  		scanf("%d", &n2);                                                                 // Controllo di n2
	  }while(!(n2<1000)&&(n2>0));
  	do{
  		printf("Inserire n1 che deve essere maggiore di 0 ma deve essere minore di n2\n");
  		scanf("%d", &n1);                                                                // Controllo di n1
	  }while(!(n1>0)&&(n1<n2));
	do{
		printf("Inserire n che deve essere compreso tra n1 e n2\n");
		scanf("%d", &n);                                                                // Controllo di n
	  }while(!(n1<n)&&(n<n2));
	  
	  for(I=0;I<n;I++){
	  	 printf("Inserire un numero\n");
	  	 scanf("%d", &v[I]);
	  	 if(I%2!=0){
	  	 	somma1=somma1+v[I];
	  	 	media++;
		   }
		   if((v[I]%2==0)||(v[I]==0)){
		   	 somma=somma+v[I];
		   }
	  }
	  media=somma1/media;
	  printf("La somma degli elementi pari e':\n%d",somma);
	  printf("La media degli elementi di posto dispari e':\n%d",media);
  }
  

