#include <stdio.h>

int main(){
    
    int matriz[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    int a, b, identidade = 1;
    
    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
            printf("[%d]", matriz[a][b]);
        }
        printf("\n");
    }

    printf("=====================\n");
    printf("Verificando Matriz Identidade:\n");

    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
            if(a == b){
                if(matriz[a][b] != 1){
                    identidade = 0;
                }
            }else{
                if(matriz[a][b] != 0){
                    identidade = 0;
                }
            }
        }
    }

    if(identidade){
        printf("A matriz e identidade");
    }
    else{
        printf("A matriz nao e identidade");
    }

    return 0;
}