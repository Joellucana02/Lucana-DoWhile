#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Dados diez números imprimir cuantos son negativos, cuántos son positivos y
cuántos son iguales a cero.*/
     int i=0, num=0, cont=0, cont1=0, cont2=0;
    while (i<10)
    {
        printf("Ingrese un numero: ");
            scanf("%d", &num);
        if (num==0)
            {
                cont++;
            }
        else
        {
            if(0<num)
            {
                cont1++;;
            }
            else
            {
                cont2++;;
            }
        }
        i++;
    }
    printf("\nLos iguales a cero son: %d", cont);
    printf("\nLos positivos son: %d", cont1);
    printf("\nLos negativos son: %d", cont2);
    return 0;
}
