# include <stdio.h>

int main() {
	
	//Declaração das variaveis
float primeiroNumero, segundoNumero, soma, subtracao, multiplicacao, divisao;

   //Solicitando dados do usuário.
printf("Escreva um número: ");
scanf("%f" , &primeiroNumero);

printf("Escreva um número: ");
scanf("%f" , &segundoNumero);

soma = primeiroNumero + segundoNumero;

subtracao = primeiroNumero - segundoNumero;

multiplicacao = primeiroNumero * segundoNumero;

divisao = primeiroNumero / segundoNumero;

   //Resultados.
printf("=== Resultados ===");
printf("\nsoma: %f" , soma);
printf("\nsubtração: %f" , subtracao);
printf("\nmultiplicação: %f" , multiplicacao);
printf("\ndivisão: %f" , divisao);     	
	
return 0;		
}

