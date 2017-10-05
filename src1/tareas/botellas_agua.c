//Implementa un programa que reporte el uso de agua de un usuario que dura x minutos en la ducha expresado en botellas de agua.
//$ ./botellas_agua
//Minutos: 1
//Botellas: 12

//$ ./botellas_agua
//Minutos: 10
//Botellas: 120
#include<stdio.h>
#include<cs50.h>

int main(void)
{
   printf("Introduce el numero de minutos bañandose: ");
   int min = get_int();
   while(min<0)
   {
    printf("Introduce el numero de minutos bañandose: ");
    min = get_int();
   }

   printf("Botellas: %i \n", min*12);
}