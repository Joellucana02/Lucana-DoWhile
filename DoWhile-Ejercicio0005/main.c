#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresan dos números, calcular la potencia a través de multiplicaciones sucesivas considerando el primero como la base y el segundo como exponente.
    int i=1, num=0, num1=0, t=1;
    printf("ingrese un n base: ");
    scanf("%d", &num);
    printf("ingrese un n exponente: ");
    scanf("%d", &num1);
    while(num1>=i)
    {
        t=t*num;
        i++;
    }
    printf("El resultado de la potenciacion es: %d", t);
    return 0;
}
