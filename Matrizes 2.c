#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
	setlocale(LC_ALL,"");
	char alunos[4] [200];
	float notas[2] [3], media[4], soma = 0;
	int i, j;
	
	printf("=== Solicitando dados para o usuário == \n");
	for (i = 0; i < 4; i++) {
		printf("Escreva a %iº aluno: ", i+1);
		scanf("%s",&alunos[i]);
		
		for (j = 0; j < 3; j++) {
			printf("Escreva a %iº nota: ", j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
			printf("\n");
		}
		
		media[i] = soma / 3;
		soma = 0;
		
		printf("\nExibindo as notas informados: \n");
		for (j = 0; j < 3; j++) {
			printf("%dº nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("\nMédia: %.1f \n", media[i]);
		
		
		
		printf("\n");
	}
	
	
	
	
	
	
	
return 0;	
}
