#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <locale.h> //grupo de caracteres especiais
int main(){
    setlocale(LC_ALL, "Portuguese"); //habilitar acentuação
float n1, n2, n3;
float media;

    printf("Informe a nota 1: ");
    scanf("%f", &n1); //usuario digita o valor da variável - %f referente ao float que deve ser inserido

    printf("Informe a nota 2: ");
    scanf("%f", &n2);

    printf("Informe a nota 3: ");
    scanf("%f", &n3);

    media=(n1+n2+n3)/3;

    printf("Média: %.1f", media); //%.1f referente as casas após a vírgula que serão exibidas

    getch(); //espera qualquer tecla ser pressionada

    return 0;
}
