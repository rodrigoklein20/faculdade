#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50000
#define NUM_ALEAT 1000000

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
        if(aux<vet[j]){               //Teste se o pai(aux) � menor que o seu filho, se sim:
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

//Fun��o que monta o vetor
void monta_vetor(int A[]) {
    int i;
    srand(time(NULL)); //fun��o que recebe o argumento para mudar a semente dos n�meros gerados por rand()
    for (i=0; i<TAMANHO; i++)
        A[i] = rand()%(NUM_ALEAT+1); //A cada execu��o gera um n�mero aleat�rio dentro do intervalo determinado e aloca no vetor
}

// Fun��o que imprime os valores do vetor
void escreve_vetor(int A[], char *msg) {
    int i;
    printf("*********** %s ***********\n", msg);
    for (i=0; i<TAMANHO; i++) //A cada incrementa��o de "i" printa o valor da respectiva posi��o no vetor
        printf("%d ", A[i]);
    printf("\n");
}

int main () {

    clock_t inicio, fim;    //Declara duas vari�veis para registrar o momento em que clock() foi acionado
    inicio = clock();
    double diferenca;       //Declara uma vari�vel para guardar e mostrar o tempo de execu��o, nesse caso, da fun��o de ordena��o
    int vetor[TAMANHO];     //Declara o vetor de inteiros com o tamanho m�ximo definido por uma constante
    monta_vetor(vetor);     //Chama a fun��o que preenche o vetor com n�meros aleat�rios
    //escreve_vetor(vetor, "VETOR DESORDENADO"); //Escreve na tela o vetor original que foi gerado pela fun��o anterior
                              //Registra o hor�rio
    heapSort(vetor, TAMANHO);
    heapSort(vetor, TAMANHO);
    heapSort(vetor, TAMANHO);
    heapSort(vetor, TAMANHO);
    fim = clock();
    printf("\ninicio: %f",inicio);
    printf("\nfim: %f",fim);
    diferenca = fim - inicio;
    printf("\nTempo em ms: %10.4f\n", diferenca/(CLOCKS_PER_SEC/1000));
    //escreve_vetor(vetor, "VETOR ORDENADO");
}
