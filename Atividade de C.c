#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// variaveis.
	float nota, soma = 0, media;
	int contador = 0;
	char resposta;
	
	do {
		printf("Escreva uma nota: ");
		scanf("%f",&nota);
		
		printf("Deseja inserir mais uma nota: ");
		scanf("%c",&resposta);
		resposta = toupper(resposta);
		
		soma += nota;
		contador++;
	} while(resposta != 'N');
	
	media = soma / contador;
	
	printf("\n=== Exibindo resultados ===\n");
	printf("Média: %.1f \n", media);
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
