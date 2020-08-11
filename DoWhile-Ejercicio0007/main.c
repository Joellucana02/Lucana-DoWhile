#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Una empresa tiene 20 vendedores se ingresan por cada uno el total de unidades
    vendidas a lo largo de 15 días de forma diaria. Se quiere saber por cada vende-
    dor el total de unidades vendidas, el total general y el vendedor con la mayor venta diaria.*/

    /* Probado
    int cont=0, cont1=0, num_v=0, acu_v=0, big=0, big_f=0, acu_v_f=0, v_dia=0;
    while(cont<3)
    {
        while(cont1<3)
        {
            printf("Ingrese las unidades del vendedor %d en el dia %d: ", cont, cont1);
            scanf("%d", &num_v);
            acu_v=acu_v+num_v;
            if (num_v>big)
            {
                big=num_v;
            }
            num_v=0;
            cont1++;
        }
        cont1=0;
        printf("El vendedor %d vendio en total %d unidades\n", cont, acu_v);
        acu_v_f=acu_v_f+acu_v;
        acu_v=0;
        if (big>big_f)
            {
                big_f=big;
                v_dia=cont;
            }
            big=0;
        cont++;
    }
    printf("El Total de unidades vendidas fue de: %d\nEl vendedor con una mayor venta diaria fue el: Vendedor %d\n", acu_v_f, v_dia );
    */

    int cont=0, cont1=0, num_v=0, acu_v=0, big=0, big_f=0, acu_v_f=0, v_dia=0;
    while(cont<20)
    {
        while(cont1<15)
        {
            printf("Ingrese las unidades del vendedor %d en el dia %d: ", cont, cont1);
            scanf("%d", &num_v);
            acu_v=acu_v+num_v;
            if (num_v>big)
            {
                big=num_v;
            }
            num_v=0;
            cont1++;
        }
        cont1=0;
        printf("El vendedor %d vendio en total %d unidades\n", cont, acu_v);
        acu_v_f=acu_v_f+acu_v;
        acu_v=0;
        if (big>big_f)
            {
                big_f=big;
                v_dia=cont;
            }
            big=0;
        cont++;
    }
    printf("El Total de unidades vendidas fue de: %d\nEl vendedor con una mayor venta diaria fue el: Vendedor %d\n", acu_v_f, v_dia );
    return 0;
}
