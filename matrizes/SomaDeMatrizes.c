#include <stdio.h>

int main(){
    int matriz_1[2][2] ={1, 2, 1, 2};
    int matriz_2[2][2] ={3, 4, 3, 4};
    int soma_1 = 0;
    int soma_2 = 0;
    int soma;

    for(int a = 0; a <= 1; a++){
        for (int i = 0; i <= 1; i++){
            printf("[%d]", matriz_1[a][i]);
            soma_1 += matriz_1[a][i];
        }
        printf("\n");
    }

    printf("==========================\n");

    for(int a = 0; a <= 1; a++){
        for (int i = 0; i <= 1; i++){
            printf("[%d]", matriz_2[a][i]);
            soma_2 += matriz_2[a][i];
        }
        printf("\n");
    }

    printf("==========================\n");

    soma = soma_1 + soma_2;

    printf("o valor das somas das matrizes é: [%d]\n", soma);
    printf("o valor das somas das matrizes é: [%d] e [%d]\n", soma_1, soma_2);
    printf("e a matriz gerada pela soma das matrizes é: \n");

    for (int c = 0; c <= 1; c++){
        for(int d = 0; d <= 1; d++){}
        printf("[{%d} {%d}]", soma_1, soma_2);
        printf("\n");
    }
    

    return 0;
}