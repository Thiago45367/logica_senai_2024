# include <stdio.h>
# include <locale.h>
# include <string.h>

#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    // variaveis.
    float numero[TAM], numeroPositivo = 0;
    int i, numeroNegativo = 0;
    
    // dados do usuário.
    printf("Escreva um número:\n");
    for (i = 0; i < TAM; i++) {
   		printf("Escreva o %iº número:", i+1);
   		scanf("%f",&numero[i]);
   		
   		if (numero[i] < 0) {
   				numeroNegativo++;
		   } else if (numero[i] > 0) {
		   		numeroPositivo += numero[i];
		   }
	}
	
	printf("\n=== Exibindo dados para o usuário === \n");
	for (i = 0; i < TAM; i++) {
			printf("%iº número: %.1f \n", i+1, numero[i]);
	}
	
	printf("\nQuantidade de números negativos: %i \n", numeroNegativo);
	printf("soma de números positivos: %.1f \n", numeroPositivo);


return 0;
}
