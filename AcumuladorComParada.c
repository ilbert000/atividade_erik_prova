#include <stdio.h>

int main(){
    AcumuladorComParadas();
    return 0;
}

void AcumuladorComParadas() {

    int numero, acumulador = 0;

    printf("Digite um numero para ser acrescentado ao acumulador ou 0 para parar: \n");
    scanf("%d", &numero);

    while (numero != 0) {

        acumulador += numero;

        printf("Digite um numero para ser acrescentado ao acumulador ou 0 para parar: \n");
        scanf("%d", &numero);
    }

    printf("Valor acumulado: %d\n", acumulador);

    printf("Acumulador parado.\n");

    return 0;
}