#include <stdio.h>
#include "ex.h"


int ex1(){
    int a[5] = {1,2,3,4,5};
    printf("ˆ—‘O ");
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\nˆ—Œã ");
    keisan( &a);
    for(int i = 0;i < 5;i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void keisan(int *p){
    for(int i = 0;i < 5; i++){
        *(p + i) *= 2;
    }
}