#include <stdio.h>

int main(){
    
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int pos_1, pos_2, a, b;

    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
            printf("%d", matriz[a][b]);
            
    }
        }
        printf("\n");
    

    printf("=====================\n");

    printf("Diagonal principal:\n");

    for(a = 0; a < 3; a++){
        printf("%d \n", matriz[a][a]);
    }
    
    for(a = 0; a < 3; a++){
        printf("%d \n", matriz[a][2 - a]);
    }
    
    return 0;
}