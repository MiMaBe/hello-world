//
//  temp_converter.c
//  K&R_Ex
//
//  Created by Miguel Martínez Bencosme on 11/09/16.
//  Copyright © 2016 MiMaBe. All rights reserved.
//

#include "temp_converter.h"
#include <stdio.h>
#include <string.h>

void temp_converter(){
    int i = 1;
    int celsius = 0;
    
    for(; i < 200; i+=20){
        celsius = (5/9)*(i-32);
        printf("%d\t%d\n",i, celsius);
    }
}
