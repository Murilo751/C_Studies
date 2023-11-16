#include <stdio.h>
#include <stdlib.h>

int bb(int *vetor, key, fim){
    inicio = 0;
    while(inicio<=fim){
        int meio = (inicio + fim)/2;

        if(key == vetor[meio]){
            return meio;
        } else{
            if(key<vetor[meio]){
                fim = meio - 1;
            }else{
                inicio = meio + 1;
            }
        }
    }
    return -1;
}

int insertioSort(int arr[10]){
    int aux;
    for (int i = 0; i < 10; ++i) {
        aux = arr[i];

        while (i > 0 && arr[i - 1] > aux){
            arr[i] = arr[i - 1];
            i = i -1;
        }
        arr[i] = aux;
    }
}

int Baitola(){
    int array[10] = {1,5,8,3,72,28,923,7,32,23};

    for (int i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }

    insertioSort(array);
    printf("\n//////////////////////////////////////////////////////////////\n");

    for (int i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }

    bb(array, 75, 9);


    return 0;
}
