#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50000
#define NUM_ALEAT 1000000

//funções que fazem a ordenação:

void criaHeap(int *vet, int i,int f){ //Função que constrói a heap. Recebe o vetor, o início e o final dele, respectivamente;
    int aux = vet[i];                 //Variável "aux" que guarda o valor do inicio do vetor;
    int j = i * 2 + 1;                //Variável "j" guarda o valor de um dos filhos de "i";
    while(j <= f){                    //Enquanto j for menor ou igual ao final do vetor continua;
        if(j < f){                    //Se j é menor que o fim do vetor;
            if(vet[j]<vet[j+1]){      //Testa qual dos dois filhos (j e j+1) é menor;
                j=j+1;                //Caso j seja menor soma 1, se não, j continua o mesmo.
            }
        }
        if(aux<vet[j]){               //Teste se o pai(aux) é menor que o seu filho, se sim:
            vet[i]=vet[j];            //Coloca o valor da posição j na posição i;
            i=j;                      //j se torna o pai;
            j=2*i+1;                  //Calcula o primeiro filho novamente         ;
        }else{                        //Se não:
            j = f+1;                  //j recebe o fim do vetor mais um, encerrando a execução do while;
        }
    }
    vet[i]=aux;                       //O valor do antigo pai(aux) vai entrar no lugar do último filho analisado.
}

void heapSort(int *vet, int n){
    int i, aux;                 //variável "aux" para auxiliar nas trocas de posições no momento da ordenação;
    for(i=(n-1)/2; i>=0; i--){  //Cria a heap a partir dos dados recebidos;
        criaHeap(vet, i, n-1);
    }
    for(i=n-1;i>=1;i--){        //Coloca o maior elemento na ultima posição do vetor, o próximo na penúltima e assim consecutivamente;
        aux=vet[0];
        vet[0]=vet[i];
        vet[i]=aux;
        criaHeap(vet, 0, i-1);  //Reconstrói a heap;
    }
}

//Função que monta o vetor
void monta_vetor(int A[]) {
    int i;
    srand(time(NULL)); //função que recebe o argumento para mudar a semente dos números gerados por rand()
    for (i=0; i<TAMANHO; i++)
        A[i] = rand()%(NUM_ALEAT+1); //A cada execução gera um número aleatório dentro do intervalo determinado e aloca no vetor
}

// Função que imprime os valores do vetor
void escreve_vetor(int A[], char *msg) {
    int i;
    printf("*********** %s ***********\n", msg);
    for (i=0; i<TAMANHO; i++) //A cada incrementação de "i" printa o valor da respectiva posição no vetor
        printf("%d ", A[i]);
    printf("\n");
}

int main () {

    clock_t inicio, fim;    //Declara duas variáveis para registrar o momento em que clock() foi acionado
    inicio = clock();
    double diferenca;       //Declara uma variável para guardar e mostrar o tempo de execução, nesse caso, da função de ordenação
    int vetor[TAMANHO];     //Declara o vetor de inteiros com o tamanho máximo definido por uma constante
    monta_vetor(vetor);     //Chama a função que preenche o vetor com números aleatórios
    //escreve_vetor(vetor, "VETOR DESORDENADO"); //Escreve na tela o vetor original que foi gerado pela função anterior
                              //Registra o horário
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
