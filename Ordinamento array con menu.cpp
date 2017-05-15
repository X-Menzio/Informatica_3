#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Ordinamento array con menu
   Autore: Marchetti Matteo
   Data: 08/05/2017
   Classe: 3INA 
   Versione 1.0*/
	
   int menu(){
   	int scelta;
   	int A[20];
   	int n;
	printf("1-Inserimento Vettore\n");
	printf("2-Ordinamento Vettore\n");
	printf("3-Stampa Vettore\n");
	printf("4-Ricerca di un numero\n");
	printf("0-EXIT \n\n");
	   do{
		printf("Scegli la parte di programma da eseguire\n");
		scanf("%d",&scelta);
      }while((scelta<0)||(scelta>4));
      return scelta;
      
	}

	   // Input Array
	void inserimento_array (int A[20],int n) 
	     {
	     	int I;
	     	for(I=0;I<n;I++){
	     		printf("Inserisci valore");
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
	  			A[X+1]=A[X];
			  }
			  A[dove]=valore;
		  }
		  printf("Il vettore e' ordinato\n");
	  }	
	  // Stampa Array
	  void stampa_array (int A[20],int n){
	  	int I;
	  	for(I=0;I<n;I++){
	  		printf("%d\n",A[I]);
		  }
	 }
	 // Ricerca sequenziale Array
	 void ricerca_array(int A[20],int n){
     int I;
     int trovato;
     int pos;
     int num;
     I=0;
     trovato=0;
     printf("Inserire numero da trovare\n");
     scanf("%d",&num);
     while((I<n)&&(trovato==0)){
     	  if(num==A[I]){
     	  	pos=I;
     	  	trovato=1;
		   }
		   I++;
	  }
	  if(trovato==1){
	  	printf("Numero trovato in posizione:%d\n",pos);
		  }else{
	  	printf("Numero non trovato\n");
	  }
	 }
	 	  






int main(){
   	int n=5;
   	int A[20];
   	int scelta;
	   
   	do{ 
   	scelta=menu();
   		switch(scelta){
			case 1:
		         inserimento_array (A,n);
				break;
			case 2:
		         insertSort (A,n);
				break;
			case 3:
				stampa_array (A,n);
				break;
			case 4:
			    ricerca_array (A,n);
				break;	
		}
	}while(scelta!=0);
   
   	
   }
   
