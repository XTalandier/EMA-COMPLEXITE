/* 
 * File:   main.c
 * Author: Duss
 *
 * Created on 28 septembre 2012, 11:21
 */

#include <stdio.h>
#include <stdlib.h>

#include "tp1.h"

/*
 * 
 */
int main(int argc, char** argv) {
    creerDamier(5);
    marcher(2 , 2 , 1);
    dumpDamier();
    return (EXIT_SUCCESS);
}

