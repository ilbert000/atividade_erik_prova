#include <stdio.h>

int SequenciaDeFibonacci(){
    int n, a = 0, b = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("Sequência de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("\n");

    return 0;
}