# include <stdio.h>

int main() {
	
	//Declara��o das variaveis
float primeiroNumero, segundoNumero, soma, subtracao, multiplicacao, divisao;

   //Solicitando dados do usu�rio.
printf("Escreva um n�mero: ");
scanf("%f" , &primeiroNumero);

printf("Escreva um n�mero: ");
scanf("%f" , &segundoNumero);

soma = primeiroNumero + segundoNumero;

subtracao = primeiroNumero - segundoNumero;

multiplicacao = primeiroNumero * segundoNumero;

divisao = primeiroNumero / segundoNumero;

   //Resultados.
printf("=== Resultados ===");
printf("\nsoma: %f" , soma);
printf("\nsubtra��o: %f" , subtracao);
printf("\nmultiplica��o: %f" , multiplicacao);
printf("\ndivis�o: %f" , divisao);     	
	
return 0;		
}

