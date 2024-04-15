#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 5

int main() {
	setlocale(LC_ALL,"");
	// variaveis.
	int numero[TAM];
	int numeroPares = 0, numeroImpares = 0, numeroPositivos = 0, numeroNegativos = 0, quantidadeNumero = 0;
	
	
	// dados do usuário.
	printf("Escreva cinco números.");
	
	int i = 0;
	
do {
	printf("Escreva um número: ");
	scanf("%i",&numero);
	
	if (numero != 0) {
		quantidadeNumero++;
	}

	for (i = 0; i < TAM; i++) {
		printf("Escreva o %iº número:",i+1);
		scanf("%i",&numero[i]);
		
		if (numero[i] < 0) {
				numeroNegativos++;
		} else if (numero[i] > 0) {
				numeroPositivos += numero[i];
		}
		if (numero[i] % 2 == 0){
			numeroPares++;
		} else {
			numeroImpares++;
		} 
		
	}
} while (numero < 0);
	printf("\n=== Exibindo dados para o usuário ===\n");
	
	printf("Número positivo: %i \n", numeroPositivos);
	printf("Número negativo: %i \n", numeroNegativos);
	printf("Número pares: %i \n", numeroPares);
	printf("Número impar: %i \n", numeroImpares);
	printf("Números inseridos: %i \n", TAM);
	
	
		
	
	
return 0;	
}
