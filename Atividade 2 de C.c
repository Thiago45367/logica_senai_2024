#include <stdio.h>

int main() {
	// Declarando variáveis.
	char nome[200] = "JONH"; // Cadeia
	char sexo = 'M'; // Caracter
	int idade = 20; // Inteiro
	float peso = 58.400; // Real
	
	// Exibindo resultados.
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n" , nome); // %s -> string -> cadeia(PORTUGOL)
	printf("Sexo: %c \n", sexo);  // %c -> char -> caracter(POTUGOL)
	printf("Idade: %i \n", idade); // %i -> int -> inteiro(POTUGOL)
	printf("Peso: %f \n", peso); // %f -> float -> real(POTUGOL)
	
	return 0;
}
