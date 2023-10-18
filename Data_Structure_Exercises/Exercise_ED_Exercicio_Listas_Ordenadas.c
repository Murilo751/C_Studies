#include <stdio.h>

void s_sort(int num[], int tam){
    int i, j, min, aux;
    for (int i = 0; i < (tam-1); ++i) {
        min = j;
        for (int j = (i+1); j < tam; ++j) {
            if(num[j] < num[min])
                min = j;
        }
        if (i != min){
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
    
}

int EEDLO(int){
    int vetor[20];
    int aux, i, j;
    for ( i = 0; i < 20; ++i) {
        printf("Digite o %do vetor ", i+1);
        scanf("%d", &vetor[i]);
    }

    s_sort(vetor,20);

    for (j = 0; j < 20; ++j) {
        printf("%d\n",vetor[j]);
    }


    return 0;
}
