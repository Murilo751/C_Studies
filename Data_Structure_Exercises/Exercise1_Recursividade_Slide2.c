#include <stdio.h>

int sum(int n);

int E1RS2(void){
    printf("oi");
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    } else if(n%2 == 0){
        return n + sum(n - 2)
    }
}

