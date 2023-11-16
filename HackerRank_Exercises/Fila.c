#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 10


    int fila[MAXTAM];
    int fim = 0;
    int inicio = 0;


void qstore( int i){
    if (fim+1 == inicio || fim+1 == MAXTAM && !inicio ){
        printf("ERRO: FILA ESTA CHEIA");
        return;
    }else{
        fila[fim] = i;
        fim++;

    }

    if(fim == MAXTAM) fim = 0;
}

int qretrieve(){
    if(inicio == MAXTAM) inicio = 0;

    if(inicio == fim){
        printf("ERRO: FILA ESTA VAZIA");
        return (int) NULL;
    } else{
        inicio++;
        return fila[inicio-1];
    }

}

int Fila(){

    qstore(10);
    qstore(20);
    qstore(30);
    qstore(40);
    qstore(50);
    qstore(60);
    qstore(70);
    qstore(80);
    qstore(90);


    printf("\nO inicio da fila e: %d", fila[inicio]);
    printf("\nO fim da fila e: %d", fila[fim]);

    qretrieve();
}