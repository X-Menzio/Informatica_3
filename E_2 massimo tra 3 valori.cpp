#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Matteo Marchetti 3°INA 14/11/2016 
// Massimo tra tre valori
int main()
{
  int N1;
  int N2;
  int N3;
  int max;
  
   printf("\n Inserire il primo valore ");
   scanf ("%d", &N1);
   printf("\n Inserire il secondo valore ");
   scanf ("%d", &N2);
   printf("\n Inserire il terzo valore ");
   scanf ("%d", &N3);
    
   if(N1>N2){
         max=N1;
   }else{
         max=N2;
    }
   
   if(N3>max){
         max=N3;
   }
   
   printf("\n Il numero massimo e' %d", max);                            
  
  
  system("PAUSE");
  
  }
