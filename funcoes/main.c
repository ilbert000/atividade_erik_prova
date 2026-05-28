#include <stdio.h> 

int main() {

    int op;

    printf("Digite a operação que deseja realizar: \n");
    printf("1 - Soma\n");
    printf("2 - maior numero\n");
    printf("3 - Eh Par\n");
    printf("4 - Fatorial\n");
    printf("5 - Idade em dias\n");
    printf("6 - Potencia\n");
    printf("7 - Media de um vetor\n");
    printf("Opção: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            soma();
            break;
        case 2:
            maior();
            break;
        case 3:
            par();
            break;
        case 4:
            fatorial();
            break;  
        case 5:
            idade();
            break;
        case 6:
            potencia();
            break;
        case 7:
            mediaVetor();
            break;  
        default:
            printf("Opção inválida!");
    }

    return 0;
}

void soma() {

    int a, b;
    printf("Digite o primeiro numero para somar: ");
    scanf("%d", &a);
    printf("Digite o segundo numero para somar: ");
    scanf("%d", &b);

    printf("A soma de %d e %d é: %d", a, b, a + b);

    return;
}

void maior(){

    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("O maior numero é: %d", a);
    } else if (b > a && b > c) {
        printf("O maior numero é: %d", b);
    } else {
        printf("O maior numero é: %d", c);
    }

    return;
}

void par() {

    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("O numero tem resultado 1.");
    } else {
        printf("O numero tem resultado 0 .");
    }

    return;
}

void fatorial() {
    int a, fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %d", a, fatorial);
    
    return;
}

void idade() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    idade = idade * 365;

    printf("A idade em dias é: %d", idade);

    return;
}

void potencia(){

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);


    for (int a = 1; a <= expoente; a++) {
        base = base * base;
    }   

    printf("O resultado é: %d", base);
    return;
}

void mediaVetor(){
    int vetor[10], soma = 0;
    float media;

    printf("Digite 10 numeros para calcular a media: \n");
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d° numero: \n", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10.0;

    printf("A media dos numeros é: %.2f", media);

    return;
}