# include <stdio.h>
# include <locale.h>
# include <string.h>


int main() {
	setlocale(LC_ALL, "");
	
	// variavel.
	int numero;
	
	// dados do us�ario.
	printf("Escreva um n�mero: ");
	scanf("%i",&numero);
		
	
	// coclus�o.
		int i;
	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d \n", numero, i, i*numero);
	}
	
	
	
	
return 0;	
}
