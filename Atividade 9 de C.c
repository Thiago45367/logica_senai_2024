# include <stdio.h>
# include <locale.h>
# include <string.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// variaveis.
	float nota;
	
	do {
	
	printf("escreva a nota do aluno: ");
	scanf("%f",&nota);
} while (nota < 0 || nota > 10);
	
printf("\n=== Exibindo nota ===\n");
printf("nota: %.1f \n", nota);
	
	
	
return 0;	
}
