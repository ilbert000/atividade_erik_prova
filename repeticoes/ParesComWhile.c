#include <stdio.h>

int ParesComWhile(){

    int numero = 1;

    printf("Todos os numeros pares entre 1 e 200:\n");

    while (numero <= 200){
        if (numero % 2 == 0) {
            printf("%d ", numero);
        }
        
        numero++;
    }

    return 0;
}