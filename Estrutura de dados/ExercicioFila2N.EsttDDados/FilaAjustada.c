#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 31
#define TAMFILA 5

struct aviao{
    char prefixo[TAM];
    char cia[TAM];
};
typedef struct aviao TipoAviao;

struct fila{
    TipoAviao avioes[TAMFILA];
    int inicio;
    int fim;
};
typedef struct fila TipoFila;

TipoFila criarFila(TipoFila fila){
    fila.fim=0;
    fila.inicio=0;
}

int verificar_vazia(TipoFila fila){
    return (fila.inicio==fila.fim);
}

int verificar_cheia(TipoFila fila){
    return (fila.inicio == ((fila.fim+1)%TAMFILA));
}

TipoFila adicionar_fila(TipoAviao aviao, TipoFila fila){
    if(verificar_vazia(fila)){
        fila.avioes[fila.fim] = aviao;
        fila.fim++;
        fila.inicio++;
    } else
        if(fila.)
    return fila;
}

int main () {
    TipoFila fila;
    TipoAviao aviao;
    fila = criar(fila);

    strcpy(aviao.prefixo, "A");strcpy(aviao.cia, "AA");
    fila = adicionar_fila(aviao, fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    strcpy(aviao.prefixo, "B");strcpy(aviao.cia, "BB");
    fila = adicionar_fila(aviao, fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    strcpy(aviao.prefixo, "C");strcpy(aviao.cia, "CC");
    fila = adicionar_fila(aviao, fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    fila = remover_fila(fila);
    imprimir(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    getchar();

    strcpy(aviao.prefixo, "D");strcpy(aviao.cia, "DD");
    fila = adicionar_fila(aviao, fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    fila = remover_fila(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    fila = remover_fila(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    fila = remover_fila(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();

    fila = remover_fila(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();


    fila = remover_fila(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();


    fila = remover_fila(fila);
    printf("%d - %d\n", fila.inicio, fila.fim);
    imprimir(fila);
    getchar();
    return 0;
}

