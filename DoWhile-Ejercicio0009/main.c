#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Dados los sueldos de 20 personas mostrar cuantos ganan más de $2000 y cuan-
tos ganan menos de esta suma.*/

    /* Probado
        int i, num, cont=0, cont1=0;
    while (i<3)
    {
        printf("\nIngrese su saldo: ");
        scanf("%d", &num);
        if (num>2000)
        {
            cont++;
        }
        else
        {
            cont1++;
        }
        i++;
    }
    printf("\nLos que ganan mas de 2000 son: %d", cont);
    printf("\nLos que ganan menos de 2000 son: %d", cont1);
    return 0;
    */
    int i, num, cont=0, cont1=0;
    while (i<20)
    {
        printf("\nIngrese su saldo: ");
        scanf("%d", &num);
        if (num>2000)
        {
            cont++;
        }
        else
        {
            cont1++;

        }
        i++;
    }
    printf("\nLos que ganan mas de 2000 son: %d", cont);
    printf("\nLos que ganan menos de 2000 son: %d", cont1);
    return 0;
}
