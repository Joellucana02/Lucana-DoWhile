#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Un curso tiene 30 alumnos identificados con números
     del 1 al 30 por cada alumno se ingresan las notas correspondientes
 a 10 materias, calcular el promedio por cada alumno y el promedio general del curso.*/
    /* Aprobado
    int alu=0, cont=0, cont1=0, num_alu=0, notas=0;
    float pro_alu=0, pro_alu_fin=0, acu=0;
    while(cont<3)
    {
        num_alu++;
        while(cont1<3)
        {
            printf("Ingrese sus notas :");
            scanf("%d", &notas);
            acu=acu+notas;
            cont1++;
        }
        cont1=0;
        pro_alu=acu/3;
        printf("El promedio del alumno %d es: %.3f \n", num_alu, pro_alu);
        pro_alu_fin=pro_alu_fin+pro_alu;
        cont++;
        acu=0;
    }
    pro_alu_fin=pro_alu_fin/3;
    printf("El promedio general del curso es: %.3f", pro_alu_fin); */

    int alu=0, cont=0, cont1=0, num_alu=0, notas=0;
    float pro_alu=0, pro_alu_fin=0, acu=0;
    while(cont<30)
    {
        num_alu++;
        while(cont1<10)
        {
            printf("Ingrese sus notas :");
            scanf("%d", &notas);
            acu=acu+notas;
            cont1++;
        }
        cont1=0;
        pro_alu=acu/10;
        printf("El promedio del alumno %d es: %.3f \n", num_alu, pro_alu);
        pro_alu_fin=pro_alu_fin+pro_alu;
        cont++;
        acu=0;
    }
    pro_alu_fin=pro_alu_fin/30;
    printf("El promedio general del curso es: %.3f", pro_alu_fin);

    return 0;
}
