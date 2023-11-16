#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXTAM 10

typedef struct{
    int tipo[MAXTAM];
    int topo;
} TPilha;

void iniciarPilha(TPilha *p){
    p->topo = -1;
}

int pilhaCheia(TPilha *p){
    if (p->topo == MAXTAM-1){
        return 1;
    } else{
        return 0;
    }
}

int pilhaVazia(TPilha *p){
    if (p->topo == - 1){
        return 1;
    } else{
        return 0;
    }
}

int adicionarItem(TPilha *p, int x){
    if (pilhaCheia(p) == 1){
        printf("\nERRO: A pilha esta cheia");
    } else{
        p->topo++;
        p->tipo[p->topo] = x;
    }
}

int removeItem(TPilha *p){
    int aux;
    if (pilhaVazia(p) == 1){
        printf("\nERRO: A pilha esta vazia");
    } else{
        aux = p->tipo[p->topo];
        p->topo--;
        return aux;
    }
}

int E1EDE(void){
    TPilha *p = (TPilha*)malloc(sizeof(TPilha));

    iniciarPilha(p);
    int aux;
    adicionarItem(p,3);
    adicionarItem(p,4);
    adicionarItem(p,8);
    aux = removeItem(p);
    printf("SAIU: %d", aux);
    adicionarItem(p,3);



    return 0;
}