#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50000
#define NUM_ALEAT 1000000

void heapSort(int *vet, int n){
    int i, aux;
    for(i=(n-1)/2; i>=0; i--){
        criaHeap(vet, i, n-1);
    }
    for(i=n-1;i>=1;i--){
        aux=vet[0];
        vet[0]=vet[i];
        vet[i]=aux;
        criaHeap(vet,0,i-1);
    }
}

void criaHeap(int *vet, int i,int f){
    int aux = vet[i];
    int j = i * 2 + 1;
    while(j <= f){
        if(j < f){
            if(vet[j]<vet[j+1]){
                j=j+1;
            }
        }
        if(aux<vet[j]){
            vet[i]=vet[j];
            i=j;
            j=2*i+1;
        }else{
            j = f+1;
        }
    }
    vet[i]=aux;
}

void monta_vetor(int A[]) {
    int i;
    srand(time(NULL));
    for (i=0; i<TAMANHO; i++)
        A[i] = rand()%(NUM_ALEAT+1);
}

// Função que imprime os valores do vetor
void escreve_vetor(int A[], char *msg) {
    int i;
    printf("*********** %s ***********\n", msg);
    for (i=0; i<TAMANHO; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main () {
    clock_t inicio, fim;
    double diferenca;
    int vetor[TAMANHO];
    monta_vetor(vetor);
    escreve_vetor(vetor, "VETOR DESORDENADO");
    inicio = clock();
    heapSort(vetor, TAMANHO);
    fim = clock();
    diferenca = fim - inicio;
    printf("\nTempo em ms: %10.4f\n", diferenca/(CLOCKS_PER_SEC/1000));
    escreve_vetor(vetor, "VETOR ORDENADO");
}
