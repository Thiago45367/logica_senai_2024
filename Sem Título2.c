#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 5

int main() {
	setlocale(LC_ALL,"");
	// variaveis.
	int numero[TAM];
	int numeroPares = 0, numeroImpares = 0, numeroPositivos = 0, numeroNegativos = 0, quantidadeNumero = 0;
	
	
	// dados do usu�rio.
	printf("Escreva cinco n�meros.");
	
	int i = 0;
	
do {
	printf("Escreva um n�mero: ");
	scanf("%i",&numero);
	
	if (numero != 0) {
		quantidadeNumero++;
	}

	for (i = 0; i < TAM; i++) {
		printf("Escreva o %i� n�mero:",i+1);
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
	printf("\n=== Exibindo dados para o usu�rio ===\n");
	
	printf("N�mero positivo: %i \n", numeroPositivos);
	printf("N�mero negativo: %i \n", numeroNegativos);
	printf("N�mero pares: %i \n", numeroPares);
	printf("N�mero impar: %i \n", numeroImpares);
	printf("N�meros inseridos: %i \n", TAM);
	
	
		
	
	
return 0;	
}
