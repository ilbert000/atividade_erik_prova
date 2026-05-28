#include <stdio.h>
#include "./ContagemCrescente.c"
#include "./TabuadaDinamica.c"
#include "./AnalisedeNumeros.c"
#include "./CalculoDeFatorial.c"
#include "./ParesComWhile.c"
#include "./AcumuladorComParada.c"
#include "./SequenciaDeFibonacci.c"

int main() {
    int op;

    printf("=======================\n");
    printf("=======================\n");
    printf("Escolha uma opção:\n");
    printf("1. Contagem Crescente\n");
    printf("2. Tabuada Dinâmica\n");
    printf("3. Análise de Números\n");
    printf("4. Cálculo de Fatorial\n");
    printf("5. Números Pares com While\n");
    printf("6. Acumulador com Paradas\n");
    printf("7. Sequência de Fibonacci\n");
    printf("8. Sair\n");
    scanf("%d", &op);
    printf("=======================\n");
    printf("=======================\n");

    switch (op){
        case 1:
            ContagemCrescente();
            break;

        case 2:
            TabuadaDinamica();
            break;
        case 3: 
            AnalisedeNumeros();
            break;
        case 4:
            CalculoDeFatorial();
            break;
        case 5:
            ParesComWhile();
            break;
        case 6:
            AcumuladorComParada();
            break;
        case 7:
            SequenciaDeFibonacci();
            break;
        case 8:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}