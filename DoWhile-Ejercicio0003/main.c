#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresan dos números por teclado mostrar por pantalla todos los intermedios.
    int num1=0, num=0, i=0;
    printf("Ingrese un valor:\n");
    scanf("%d", &num);
    printf("Ingrese un valor:\n");
    scanf("%d", &num1);
    if(num>num1)
        {
            do
            {
                num1++;
                printf("\n%d", num1);

            }while(num-1>num1);
        }
        else
            {
                do
                {
                     num++;
                    printf("\n%d", num);

                }while(num1-1>num);
            }

    return 0;
}
