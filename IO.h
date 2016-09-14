//
//  IO.h
//  K&R_Ex
//
//  Created by Miguel Martínez Bencosme on 14/09/16.
//  Copyright © 2016 MiMaBe. All rights reserved.
//

#ifndef IO_h
#define IO_h

#include <stdio.h>
void getChar(){
     char c;
    while ((c = getchar()) != EOF)
        putchar(c);
}

#endif /* IO_h */
