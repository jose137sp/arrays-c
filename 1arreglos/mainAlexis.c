#include <stdio.h>

int main()
{
/* PROBLEMA 1
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
//Impresion de Contadores
    for(x=0;x<3;x++)
        printf("Contador %d",cont[x]); 

    printf("\n\n\n El porcentaje de productos mayores a 50 es: %.2f",((float)cont[0]/20)*100);
    printf("\n El porcentaje de productos menores a 20 es: %.2f",((float)cont[1]/20)*100);
    printf("\n El porcentaje de productos restantes es: %.2f",((float)cont[2]/20)*100);
*/
    //PROBLEMA 2

    int i, temp, j;
    int arr[20]={
        1,11,
        2,12,
        3,13,
        4,14,
        5,15,
        6,16,
        7,17,
        8,18,
        9,19,
        10,20
    }; 
    
    //Impresion de Valores antes
    for(i=0;i<20;i++)
        printf("\n Arreglo [%d] = %d ",i,arr[i]); 

    for (i = 1; i < 20; i++) { 
        temp = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > temp) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = temp; 
    }
    
    //Impresion de Valores despues
    for(i=0;i<20;i++)
        printf("\n Arreglo [%d] = %d ",i,arr[i]); 

    return 0;
}
