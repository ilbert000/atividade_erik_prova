#include <stdio.h>

int AnalisedeNumeros(){

    int numero, soma = 0, maior;

    for (int i = 1; i <= 10; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;

        if (i == 1 || numero > maior) {
            maior = numero;
        }
    }

    float media = soma / 10.0;

    printf("\nResultado:\n");
    printf("Soma total: %d\n", soma);
    printf("Media aritmetica: %.2f\n", media);
    printf("Maior valor digitado: %d\n", maior);

    return 0;
}