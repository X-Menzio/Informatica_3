#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Biglietto Mirabilandia
   Autore: Marchetti Matteo
   Data: 21/11/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int dis;		  //Disabile
	int accomp;		 //Accompagnatore
	int altez;		//Altezza
	int si;		   //Supplemento
	int prezzo;	  //Prezzo
	int eta;     //età
	printf("Il cliente e' un diversamente abile? (1=Si, 0=No) ");	 						//Chiediamo se il cliente è un disabile
	scanf("%d",&dis);
	if(dis==0){																	//se il cliente non è disabile allora
		printf("Il cliente e' un accompagnatore? (1=Si, 0=No) ");	 			//chiediamo se il cliente è un accompagnatore
		scanf("%d",&accomp);													
		if (accomp==0){																//se il cliente non è un accompagnatore allora
			printf("Inserire l'altezza ");										//chiediamo l'altezza del cliente
			scanf("%d",&altez);
			if(altez<=100){														//se l'altezza del cliente è minore di 100cm allora
				prezzo=0;															//il prezzo è €0
				printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");		//chiediamo se il cliente vuole il supplemento
				scanf("%d",&si);									
				if (si==1)														
					prezzo=prezzo+7,50;												
			
			}else{	
			    printf("Qual'e' la tua eta'");
		        scanf("%d", &eta);
		        if(eta>60){			  	        
			  	         prezzo=25,00;
			  	         printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");										
					     scanf("%d",&si);
					     if (si==1)													 
						      prezzo=prezzo+9,50;	
			}else{
			        if(altez<=140){													
					prezzo=28;														
					printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");									
					scanf("%d",&si);
					if (si==1)													
						prezzo=prezzo+7,50;									
				
				}else{															
					prezzo=34,90;												 	
					printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");										
					scanf("%d",&si);
					if (si==1)													
						prezzo=prezzo+9,50;												
				}
			
		         				
		          }
		       }
		}else{																	
			prezzo=25,50;															
			printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");											
			scanf("%d",&si);
			if (si==1)															
				prezzo=prezzo+9,50;														
		}	
			
	}else{																		
		prezzo=0;
		printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");													
		scanf("%d",&si);
		if (si==1)																
			prezzo=prezzo+7,50;															
	}
	printf("il prezzo da pagare e' %d",prezzo);									
}	
