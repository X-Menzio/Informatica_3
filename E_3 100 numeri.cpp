#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Matteo Marchetti 3°INA 14/11/2016 
// Somma i primi 100 numeri

  int main()
{
      int somma;
      int I;
      somma=0;
      I=1;
      while(I<=100){
                somma=somma+I;
                I=I+1;
      }
      printf("\n %d\n", somma);
      
   system("PAUSE");
   return 0;
   
}               
                    
