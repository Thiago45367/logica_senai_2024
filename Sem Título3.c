# include <stdio.h>
# include <locale.h>
# include <string.h>

#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    // variaveis.
    float numero[TAM], numeroPositivo = 0;
    int i, numeroNegativo = 0;
    
    // dados do usu�rio.
    printf("Escreva um n�mero:\n");
    for (i = 0; i < TAM; i++) {
   		printf("Escreva o %i� n�mero:", i+1);
   		scanf("%f",&numero[i]);
   		
   		if (numero[i] < 0) {
   				numeroNegativo++;
		   } else if (numero[i] > 0) {
		   		numeroPositivo += numero[i];
		   }
	}
	
	printf("\n=== Exibindo dados para o usu�rio === \n");
	for (i = 0; i < TAM; i++) {
			printf("%i� n�mero: %.1f \n", i+1, numero[i]);
	}
	
	printf("\nQuantidade de n�meros negativos: %i \n", numeroNegativo);
	printf("soma de n�meros positivos: %.1f \n", numeroPositivo);


return 0;
}
