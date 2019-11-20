//
//  main.c
//  1arreglos
//
//  Created by Jose Saavedra on 11/19/19.
//  Copyright © 2019 Jose Saavedra. All rights reserved.
//


#include <stdio.h>

int main()
{
    int x, i=0;
    int cont[]={0,0,0};
    float productos[20];
    i=1;
    
    for(x=0;x<20; x++)
    {
        printf("Inserte su %d producto: ", x+1 );
        scanf("%f", &productos[x]);

        if(productos[x]>50)
            cont[0]++;

        if(productos[x]<20)
            cont[1]++;

        if((productos[x]<50)&&(productos[x]>20))
            cont[2]++;
                
    }
/*Impresion de Contadores
    for(x=0;x<3;x++)
        printf("Contador %d",cont[x]); */

    printf("\n\n\n El porcentaje de productos mayores a 50 es: %.2f",((float)cont[0]/20)*100);
    printf("\n El porcentaje de productos menores a 20 es: %.2f",((float)cont[1]/20)*100);
    printf("\n El porcentaje de productos restantes es: %.2f",((float)cont[2]/20)*100);
    
    
    return 0;
}
