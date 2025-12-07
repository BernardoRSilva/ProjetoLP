#include <stdio.h>
#include <math.h>
#include "funcaolog.h"

void funcaolog(int VET[], int n)
{
   float logaritmo, Vlog[n];
   for (int I = 0; I < n; I++){
       logaritmo = log(VET[I]);
       Vlog[I] = logaritmo;
    }
   for (int I = 0; I < n; I++){
    printf("Logaritmo de base natural de %d: %f\n",VET[I], Vlog[I]);
   }
   
}