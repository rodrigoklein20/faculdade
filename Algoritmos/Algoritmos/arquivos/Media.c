#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
float n1,n2,n3;
float media;
int main(){
    printf("Informe a nota 1: ");
	scanf("%f",&n1);
	printf("Informe a nota 2: ");
	scanf("%f",&n2);
	printf("Informe a nota 3: ");
	scanf("%f",&n3);
	media = n1+n2+n3/3;
	printf("Media sem considerar a ordem dos operadores: %f\n", media);
	media = (n1+n2+n3)/3;
	printf("Media considerando a ordem dos operadores: %f\n", media);
	getch();
    return 0;
}

