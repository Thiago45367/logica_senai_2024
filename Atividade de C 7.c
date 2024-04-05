#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "");
	
	// variaveis.
	int opcao, contadorSalario = 0, mulheres5k = 0;
	int idade, maiorIdade = INT_MIN, menorIdade = INT_MAX;
	float salario, somaSalario = 0, mediaSalario;
	char sexo;
	
	do {
		printf("=== MENU === \n");
		printf("1 - Adicionar pessoa \n");
		printf("2 - Exibir resultado e sair \n");
		printf("Escreva a op��o desejada: ");
		scanf("%i",&opcao);
		
		switch (opcao) {
			case 1:
			printf("Escreva sua idade: ");
			scanf("%i",&idade);
			
			fflush(stdin);
			printf("Escreva seu sexo M ou F: ");
			scanf("%c",&sexo);
			
			printf("Escreva seu sal�rio: ");
			scanf("%f",&salario);
			
			sexo = toupper(sexo);
			
			if(idade > maiorIdade) {
				maiorIdade = idade;
			}
			if(idade < menorIdade) {
				menorIdade = idade;
			}
			contadorSalario++;
			somaSalario += salario;
			
			if (sexo == 'F' && salario >=  5000) {
				mulheres5k++;
			}
				break;
			case 2:
				break;
			default:
				printf("\nOp��o inv�lida! \n");
				sleep(4);
				system("cls || clear");
		}
	}while (opcao != 2);
	mediaSalario =somaSalario / contadorSalario;
		
	printf("=== Exibindo resultados ===\n");	
	printf("m�dia salarial do grupo: %.2f \n", mediaSalario);
	printf("maior idade: %i \n", maiorIdade);
	printf("menor idade: %i \n", menorIdade);
	printf("quantidade de mulheres com sal�rio acima de 5 mil:");
	
return 0;	
}
