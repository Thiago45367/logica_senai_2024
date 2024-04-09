#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>

#define TAM 4

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
		printf("%dª nota: %.1f \n", i+1, notas[i]);
	}
	
	printf("\nMédia: %.1f \n", media);
	if(media >= 7) {
		printf("\nSituação: Aprovado :)");
	}else{
		if(media >= 5) {
			printf("\nSituaçâo: Recuperaçâo :(");
		} else {
			printf("\nSituaçâo: Reprovado :(");
		}
	}
	
	
	
	
return 0;	
}
