#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresar 15 números y encontrar el valor promedio y cuál es el mayor de los números ingresados.
    /* Prueba
    int i=0, num=0, num1=0;
    float cont=0;
    printf("Ingrese 1 valores: \n");
    scanf("%d", &num);
    cont=cont+num;
    while(i<=2)
    {
        printf("ingrese un valor:\n");
        scanf("%d", &num1);
        cont=cont+num1;
       if (num>num1)
        {

        }
        else
        {
            num=num1;
        }
        num1=0;
        i++;

    }
    cont=cont/4;
    printf("El mayor es: %d\nEl promedio es:%.3f", num, cont);
    */
      int i=0, num=0, num1=0;
    float cont=0;
    printf("Ingrese 1 valores: \n");
    scanf("%d", &num);
    cont=cont+num;
    while(i<=13)
    {
        printf("ingrese un valor:\n");
        scanf("%d", &num1);
        cont=cont+num1;
       if (num>num1)
        {

        }
        else
        {
            num=num1;
        }
        num1=0;
        i++;

    }
    cont=cont/4;
    printf("El mayor es: %d\nEl promedio es:%.3f", num, cont);
    return 0;
}
