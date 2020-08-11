#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresado un numero entero calcular su factorial.
     int ft=0, num=0, h=1;
    printf("ingrese un numero: ");
    scanf("%d",&ft);
    while(ft>0)
    {
         num=num+1;
        h=h*num;
        ft--;
    }
    printf("El factorial es: %d", h);
    return 0;
}
