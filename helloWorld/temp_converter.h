//
//  temp_converter.h
//  K&R_Ex
//
//  Created by Miguel Martínez Bencosme on 11/09/16.
//  Copyright © 2016 MiMaBe. All rights reserved.
//

#ifndef temp_converter_h
#define temp_converter_h
#define LOWER 1
#define UPPER 300
#define STEP 20

#include <stdio.h>

void temp_converter(){
    int fahr = LOWER;
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    for (fahr = STEP; fahr <= UPPER; fahr = fahr + STEP) printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

#endif /* temp_converter_h */
