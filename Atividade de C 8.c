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
	
	// dados do us�ario.
	do {
	
	
	printf("===== MENU ===== \n");
		printf("1 - Adicionar familiar \n");
		printf("2 - Exibir resultado e sair \n");
		printf("Escreva a op��o desejada: ");
		scanf("%i",&opcao);
		
	switch (opcao) {
		case 1:
			break;
		printf("Escreva seu sal�rio: ");
		scanf("%f",&salario);
		fflush(stdin);
	
		printf("Escreva o n�mero de filho: ");
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
	    printf("\nOp��o inv�lida! \n");
	    sleep(4);
        system("cls || clear");	

}
}while (opcao != 2);
mediaSalario =somaSalario / contadorSalario;


printf("=== Exibindo resultados ===\n");	
	printf("m�dia salarial do grupo: %.2f \n", mediaSalario);
	printf("maior idade: %i \n", maiorSalario);
	printf("menor idade: %i \n", menorSalario);	
	   

	
return 0;	
}
