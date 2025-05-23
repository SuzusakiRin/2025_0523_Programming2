#include <stdio.h>
#include "ex.h"

int ex2() {
    int a[3][5] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5,};
    printf("ˆ—‘O : \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    keisan2(&a, 2);
    printf("ˆ—Œã : \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void keisan2(int *p, int k){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            *(p + j + i*5) *= (k + i);
        }
    }
}