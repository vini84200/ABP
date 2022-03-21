/*
 * main.c
 * Copyright (C) 2022 vini84200 <vini84200@fedora>
 *
 * Distributed under terms of the MIT license.
 */

#include "abp.h"

int main () {
    ABP arvore;
    inicializarABP(&arvore);
    inserirABP(&arvore, 7);
    inserirABP(&arvore, 9);
    inserirABP(&arvore, 9);
    inserirABP(&arvore, 2);
    inserirABP(&arvore, 16);
    inserirABP(&arvore, 3);
    inserirABP(&arvore, 5);
    inserirABP(&arvore, 1);
    inserirABP(&arvore, 12);

    removerABP(&arvore, 3);
    removerABP(&arvore, 9);


    return 0;
}


