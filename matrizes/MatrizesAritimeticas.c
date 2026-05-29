#include <stdio.h>

int main() {
    
    int matriz_1[2][2], matriz_2[2][2], matriz_3[2][2], matriz_4[2][2], a, b;
    
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
    
    printf("\n======================\n");
    printf("\na multiplicacao das matrizes\n");
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int j = 0; j < 2; j++){
            matriz_4[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
        printf("\n");
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]",matriz_4[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}
