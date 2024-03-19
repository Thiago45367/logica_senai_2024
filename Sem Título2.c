#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
   
    // variaveis.
    
char nome[200];
int idade;
float notaUm, notaDois, notaTres, soma, media;
	
  //dados do usuário.
printf("digite seu nome: ");
scanf("%s",&nome);

printf("digite sua idade: ");
scanf("%d",&idade);
  
printf("digite sua primeira nota: ");
scanf("%f",&notaUm);

printf("digite sua segunda nota: ");
scanf("%f",&notaDois);

printf("digite sua terceira nota: ");
scanf("%f",&notaTres);  	
	
  //calculo.
soma = notaUm + notaDois + notaTres;
media = soma / 3;

system("cls");
 //resultado.
printf("\n=== Conclusão ===\n");
printf("nome: %s \n", nome);
printf("idade: %d \n", idade);
printf("Nota1: %.1f \n", notaUm);
printf("nota2: %.1f \n", notaDois);
printf("nota3: %.1f \n", notaTres);   	
if(media >= 7){
	printf("\nmedia: %.1f", media);
	printf("\nAprovado.");
} else{
	printf("\nmedia: %.1f", media);
	printf("\nReprovado.");
}	
	
return 0;	
}
