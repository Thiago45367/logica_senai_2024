#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, j;
	char diciplinas[3][250];
	float notas[3][2];
	float media[3];
	float somaNotas;
	
	for (i = 0; i < 3; i++) {
		printf("Escreva o nome da %dº diciplinas: ", i + 1);
		scanf("%s",&diciplinas[i]);
		
		for (j = 0; j < 2; j++) {
			printf("Escreva o valor da %dº nota: ", j + 1);
			scanf("%f",&notas[i][j]);
			
			somaNotas += notas[i][j];
		}
		
		media[i] = somaNotas / j; // j sai do laço com valor 2.
		somaNotas = 0;
		fflush(stdin);
	}
	
	printf("\n");
	
	for (i = 0; i < 3; i++) {
		printf("%dº nome: %1.f \n", i + 1, diciplinas[i]);
		
		for (j = 0; j < 2; j++) {
			printf("%dº nota: %1.f \n", j + 1, notas[i][j]);
		}
		
		printf("Média: %1.f \n", media[i]);
		
		if (media[i] >= 7) {
			printf("Aprovado:) ");
		} else if(media[i] >= 5) {
			printf("Recuperação:/ ");
		} else {
			printf("Reprovado:( ");
		}
		
		printf("\n\n");
	}

	
	
return 0;	
}
