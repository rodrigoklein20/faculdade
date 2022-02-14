#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

//fun��es que fazem a ordena��o:

void criaHeap(int *vet, int i,int f){ //Fun��o que constr�i a heap. Recebe o vetor, o in�cio e o final dele, respectivamente;
    int aux = vet[i];                 //Vari�vel "aux" que guarda o valor do inicio do vetor;
    int j = i * 2 + 1;                //Vari�vel "j" guarda o valor de um dos filhos de "i";
    while(j <= f){                    //Enquanto j for menor ou igual ao final do vetor continua;
        if(j < f){                    //Se j � menor que o fim do vetor;
            if(vet[j]<vet[j+1]){      //Testa qual dos dois filhos (j e j+1) � menor;
                j=j+1;                //Caso j seja menor soma 1, se n�o, j continua o mesmo.
            }
        }
        if(aux<vet[j]){               //Teste se o pai(aux) � menor que o seu filho maior, se sim:
            vet[i]=vet[j];            //Coloca o valor da posi��o j na posi��o i;
            i=j;                      //j se torna o pai;
            j=2*i+1;                  //Calcula o primeiro filho novamente         ;
        }else{                        //Se n�o:
            j = f+1;                  //j recebe o fim do vetor mais um, encerrando a execu��o do while;
        }
    }
    vet[i]=aux;                       //O valor do antigo pai(aux) vai entrar no lugar do �ltimo filho analisado.
}

void heapSort(int *vet, int n){
    int i, aux;                 //vari�vel "aux" para auxiliar nas trocas de posi��es no momento da ordena��o;
    for(i=(n-1)/2; i>=0; i--){  //Cria a heap a partir dos dados recebidos;
        criaHeap(vet, i, n-1);
    }
    for(i=n-1;i>=1;i--){        //Coloca o maior elemento na ultima posi��o do vetor, o pr�ximo na pen�ltima e assim consecutivamente;
        aux=vet[0];
        vet[0]=vet[i];
        vet[i]=aux;
        criaHeap(vet, 0, i-1);  //Reconstr�i a heap;
    }

}

// Fun��o que imprime os valores do vetor
void escreve_vetor(int A[]) {
    int i;
    for (i=0; i<TAMANHO; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main () {
    clock_t inicio, fim;
    double diferenca;
    int vetor[TAMANHO]={9,8,7,6,5,4,3,2,1,0};
    escreve_vetor(vetor);
    inicio = clock();
    heapSort(vetor, TAMANHO);
    fim = clock();
    diferenca = fim - inicio;
    printf("\nTempo em ms: %10.4f\n", diferenca/(CLOCKS_PER_SEC/1000));
    escreve_vetor(vetor);
}
