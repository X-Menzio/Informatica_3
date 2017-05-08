#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Ordinamento array con menu
   Autore: Marchetti Matteo
   Data: 08/05/2017
   Classe: 3INA 
   Versione 1.0*/
   int main(void){
   	int n;
   	int A[20];
   	int scelta;
   	scelta=menu;
   	
   }
   int menu(){
   	int scelta;
	printf("1-Inserimento Vettore\n");
	printf("2-Stampa Vettore\n");
	printf("3-Calcolo occorrenze\n");
	printf("0-EXIT \n\n");
	   do{
		printf("Scegli la parte di programma da eseguire\n");
		scanf("%d",&scelta);
	   
	   switch(scelta){
			case 1:
		         inserimento_array(A,n);
				break;
			case 2:
		         insertSort(A,n);
				break;
			case 3:
				stampa_array(A,n);
				break;
		}
	}while(scelta!=0);
	   // Input Array
	void inserimento_array (int A[20],int n) 
	     {
	     	int I;
	     	for(I=0;I<n;I++){
	     		scanf("%d",&A[I]);
			 }
		}
	  // Ordinamento Array
	  void insertSort (int A[20],int n){
	  	int I,dove,valore,X;
	  	for(I=I;I<n;I++){
	  		dove=0;
	  		valore=A[I];
	  		while(valore>A[dove] && dove<I) dove++;
	  		for(X=I-1;X>=dove;X--){
	  			A[x+1]=A[X];
			  }
			  A[dove]=valore;
		  }
	  }	
	  // Stampa Array
	  void stampa_array (int A[20],int n){
	  	int I;
	  	for(I=0;I<n;I++){
	  		printf("%d",A[I]);
		  }
	 }
	  
		  
	getchar();
	getchar();
}
   
