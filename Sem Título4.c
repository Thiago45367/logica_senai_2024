# include <stdio.h>
# include <locale.h>
# include <string.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota, soma = 0, media;
	int i;
	
	for (i = 1; i <= 2; i++) {
		do {
			printf("Escreva a %iº nota: ", i);
			scanf("%f",&nota);
		}while (nota < 0 || nota > 10);
		
		soma =+ nota;
	}
	media = soma / 2;
	
	printf("\n=== Exibindo média ===\n");
	printf("media: %.1f \n", media);
	
return 0;	
}
