#include<stdio.h>

int main(){
    
    int matriz[4][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
    int soma = 0;
    
    for(int a = 0; a < 4; a++){
        for(int b = 0; b < 4; b++){    
            printf("[%d]", matriz[a][b]);  
            soma += matriz[a][b];
        }
        printf("\n");
    }

    printf("\na soma da matris é igual a: [%d]", soma);

    return ;
}