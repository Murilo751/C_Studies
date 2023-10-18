#include <stdio.h>
#define Max 10

typedef int ptr;
typedef int chave;

typedef struct{
    chave key;
}item;

typedef struct{
        item  tamanho[Max];
        ptr frente, tras;
}fila;


