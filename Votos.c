#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
//variaveis.	
int idade;

//solicitando dados.	
printf("Escreva sua idade: ");
scanf("%d",&idade);

//verifica��o.
if (idade >= 18 && idade <= 65) {
	printf("Voc� � obrigado a votar!");
} else {
	printf("Vo�� n�o � obrigado a votar!");
}

return 0;	
}
