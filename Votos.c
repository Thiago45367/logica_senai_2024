#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
//variaveis.	
int idade;

//solicitando dados.	
printf("Escreva sua idade: ");
scanf("%d",&idade);

//verificação.
if (idade >= 18 && idade <= 65) {
	printf("Você é obrigado a votar!");
} else {
	printf("Voçê não é obrigado a votar!");
}

return 0;	
}
