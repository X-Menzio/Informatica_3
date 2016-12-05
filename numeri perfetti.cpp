#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
/* Titolo: Numero perfetto 
   Autore: Marchetti Matteo 
   Data: 05/12/2016 
   Classe: 3INA 
   Versione 1.0*/ 
   int main(){
   	
   	int n1;      //Primo numero preso in Input
   	int n2;     // secondo numero preso in Input
   	int n;     //  Numero compreso tra n1 e n2
   	int somma; // Somma contiene i divisori
   	int div;   // Divisori del numero
   	
   	div=1;
   	somma=0;
   	
   	do{
   	   printf("Inserire un numero che deve essere pari e minore di 10000\n" );
   	   scanf("%d", &n1);
   	   }while(!((n1<10000)&&(n1%2==0)));
	   
	   do{
	      printf("Inserire un numero che deve essere dispari e maggiore del numero inserito prima \n ");
		  scanf("%d", &n2);
		  }while(!((n2>n1)&&(n2%2!=0)));   	
	     
	     do{
	     	printf("Inserire un numero compreso tra i numeri inseriti prima\n ");
	     	scanf("%d", &n);
	     	}while(!((n2>n1)&&(n<n2)));
		  
		  
		  while(div<n){
		  	   if(n%div==0){
		  	   	 somma=somma+div;
		  	   	 
				 }
				 div=div+1;
		  }
	   if(somma==n){
	   	 printf("Il numero e' perfetto\n ");
	   }else{
	   	     printf("Il numero non e' perfetto\n");
	   }
 
   	
}
