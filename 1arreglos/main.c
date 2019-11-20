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
       
        i++;
        printf("Inserte su %d producto", i);
        scanf("%f", &productos[x]);
        
    }
    
    
    return 0;
}
