#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>


int main() {
	setlocale(LC_ALL,"");
	
	// variaveis.
	int filhos, opcao, familia, contadorSalario = 0, contadorFilho = 0, somaFilho = 0;
	float salario, maiorSalario, menorSalario, mediafilho, somaSalario = 0, mediaSalario;
	
	// dados do usúario.
	do {
	
	
	printf("===== MENU ===== \n");
		printf("1 - Adicionar familiar \n");
		printf("2 - Exibir resultado e sair \n");
		printf("Escreva a opção desejada: ");
		scanf("%i",&opcao);
		
	switch (opcao) {
		case 1:
			break;
		printf("Escreva seu salário: ");
		scanf("%f",&salario);
		fflush(stdin);
	
		printf("Escreva o número de filho: ");
		scanf("%i",&filhos);
		fflush(stdin);
	
	if (salario > maiorSalario) {
		maiorSalario = salario;
	}
	if (salario < menorSalario) {
		menorSalario = salario;
	}
	contadorSalario++;
	somaSalario += salario;
	contadorFilho++;
	somaFilho += filhos;	
	

	break;	
case 2:
	 break;
default:
	    printf("\nOpção inválida! \n");
	    sleep(4);
        system("cls || clear");	

}
}while (opcao != 2);
mediaSalario =somaSalario / contadorSalario;


printf("=== Exibindo resultados ===\n");	
	printf("média salarial do grupo: %.2f \n", mediaSalario);
	printf("maior idade: %i \n", maiorSalario);
	printf("menor idade: %i \n", menorSalario);	
	   

	
return 0;	
}
