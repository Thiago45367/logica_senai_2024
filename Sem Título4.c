#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 5

int main() {
	setlocale(LC_ALL,"");
	float numero[TAM], somaPositivo = 0;
	int i, quantidadeNegativo = 0;
	
	printf("=== Solicitando dados para o usu�rio === \n");
	for (i = 0; i < TAM; i++) {
			printf("Escreva o %i� n�mero: ", i+1);
			scanf("%f",&numero[i]);
			
			if (numero[i] < 0) {
				numero[i] = 0;
			}
	}
	
	printf("\n=== Exibindo dados para o usu�rio === \n");
	for (i = 0; i < TAM; i++) {
		printf("%i� n�mero: %.1f \n", i+1, numero[i]);
	}
	
	
return 0;	
}
