# include <stdio.h>
# include <locale.h>
# include <string.h>


int main() {
	setlocale(LC_ALL, "");
	
	// variavel.
	int numero;
	
	// dados do usúario.
	printf("Escreva um número: ");
	scanf("%i",&numero);
		
	
	// coclusão.
		int i;
	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d \n", numero, i, i*numero);
	}
	
	
	
	
return 0;	
}
