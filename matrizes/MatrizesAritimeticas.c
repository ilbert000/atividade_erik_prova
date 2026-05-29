#include <stdio.h>

int main() {
    
    int matriz_1[2][2], matriz_2[2][2], matriz_3[2][2], matriz_4[2][2], a, b, op;
    
    for(a = 0; a < 2; a++){
        for(b = 0; b < 2; b++){
            printf("Digite o valor para a posicao [%d][%d]: ", a, b);
            scanf("%d", &matriz_1[a][b]);
        }
    }
    
    printf("======================\n");
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]", matriz_1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    for(a = 0; a < 2; a++){
        for(b = 0; b < 2; b++){
            printf("Digite o valor para a posicao [%d][%d]: ", a, b);
            scanf("%d", &matriz_2[a][b]);
        }
    }
    
    printf("\n======================\n");
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]", matriz_2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    printf("======================\n");
    printf("======================\n");
    printf("escolha uma das opcoes\n");
    printf("1. soma\n");
    printf("2  multiplicacao\n");
    printf("3. Sair\n");
    printf("sua escolha e: ");
    scanf("%d", &op);
    
    while(op == 1 || op == 2 || op == 4 ){
        switch(op){
        case 1:
        
        printf("\n======================\n");
        printf("\na soma das matrizes\n");
    
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                matriz_3[i][j] = matriz_1[i][j] + matriz_2[i][j];
            }
            printf("\n");
        }
    
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                printf("[%d]",matriz_3[i][j]);
            }
            printf("\n");
        }
        
        printf("3. Sair\n");
        printf("4. Voltar\n");
        printf("sua escolha e: ");
        scanf("%d", &op);
        
        break;
        
        case 2:
        printf("\n======================\n");
                printf("A MULTIPLICACAO DAS MATRIZES:\n");
            
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        matriz_4[i][j] = 0; // CORREÇÃO: Zera a posição para tirar o lixo de memória
                        for(int k = 0; k < 2; k++){
                            matriz_4[i][j] += matriz_1[i][k] * matriz_2[k][j];
                        }
                    }
                }
            
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        printf("[%d]", matriz_4[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");        
        
        printf("3. Sair\n");
        printf("4. Voltar\n");
        printf("sua escolha e: ");
        scanf("%d", &op);
        
        break;
        
        case 3:
        printf("saindo...\n");
        break;
        
        case 4:
        printf("======================\n");
        printf("======================\n");
        printf("escolha uma das opcoes\n");
        printf("1. soma\n");
        printf("2  multiplicacao\n");
        printf("3. Sair\n");
        printf("sua escolha e: ");
        scanf("%d", &op);
        break;
        
        default:
        printf("opecao invalida, tente novamente");
        break;
    }   
    }
    
    return 0;
}
