# include <stdio.h>
# include <locale.h>
# include <string.h>

#define TAM 5


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[TAM][200];
	int i, idade[TAM];
	
	printf("Escreva seu nome:\n");
	for (i = 0; i < TAM; i++) {
			printf("Escreva o %i� nome: ", i+1);
			scanf("%s",nome[i]);
			
				printf("Escreva a %i� idade: ", i+1);
			scanf("%i",&idade[i]);
			
			printf("\n");
	}
	
	system("cls");
	
	printf("\n=== Exibindo dados para o usu�rio === \n");
	for (i = 0; i < TAM; i++) {
			printf("%i� nome: %s \n", i+1, nome[i]);
			printf("i� idade: %i \n\n", i+1, idade[i]);
	}
	
	
	
return 0;	
}
