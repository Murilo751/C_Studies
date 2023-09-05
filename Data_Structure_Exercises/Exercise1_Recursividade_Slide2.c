#include <stdio.h>
#include <locale.h>

int sum(int n);

int E1RS2(int) {
    int n;


    printf("Digite um nimero par: ");
    scanf("%d", &n);

    if (n%2 == 1){
        printf("é para digitar numero PAR desgraça \n", setlocale(LC_ALL,""));
        E1RS2(n);
    } else{
        printf("%d",sum(n));
    }
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    } else if(n%2 == 0){
        return n + sum(n - 2);
    }
}

