#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>

#define TAM 3

int main() {
	setlocale(LC_ALL,"");
	
	// variaveis.
		float notas[TAM], soma = 0, media;
	int i;
	
	
	printf("Escreva sua notas:\n");
	for (i = 0; i < TAM; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}
	
	media = soma / (float) TAM;
	
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++) {
		printf("%d� nota: %.1f \n", i+1, notas[i]);
	}
	
	printf("\nM�dia: %.1f \n", media);
	
	
	
	
return 0;	
}
