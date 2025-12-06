#include <stdio.h>
#include <math.h>


void funcaolog(int N, int VET[], int TAM)
{
   float logaritmo, Vlog[TAM];
   for (int I = 0; I < N; I++){
       logaritmo = log(VET[I]);
       Vlog[I] = logaritmo;
    }
   for (int I = 0; I < N; I++){
    printf("%f\t", Vlog[I]);
   }
   
}