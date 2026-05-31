#include <stdio.h>
#include <math.h>

int CalculoDeFatorial(){

    int numero, resultado;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não é definido para números negativos.\n");
        return 1;
    } 
    
    resultado = (int)tgamma(numero + 1);

    printf("o fatorial do numero %d! e igual a = %d\n", numero, resultado);

    return 0;
}