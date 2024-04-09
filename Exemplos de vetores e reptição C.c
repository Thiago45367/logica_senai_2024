#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>


int main() {
	setlocale(LC_ALL,"");
	
	int vetor[5];
	int i;
	
	
	printf("Escreva os elementos do vetor:\n");
	for (i = 0; i < 5; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	system("cls");
	
	for (i = 0; i < 5; i++) {
		printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
	
	
	
return 0;	
}
