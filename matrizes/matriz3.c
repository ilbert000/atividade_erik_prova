#include <stdio.h>

int main(){
    
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int a = 0; a < 3; a++){
        for(int b = 0; b < 3; b++){
            
            printf("%d", matriz[a][b]);
         
        }
        printf("\n");
    }
    
    return 0;
    
}