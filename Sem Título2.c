# include <stdio.h>
# include <locale.h>
# include <string.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
char nome[200];
float primeiraNota, segundaNota, media, soma;


printf("Escreva seu nome: ");
scanf("%s",&nome);

printf("Escreva sua nota: ");
printf("\nArtes: ");
scanf("%f",&primeiraNota);
printf("\nHistoria: ");
scanf("%f",&segundaNota);


soma = primeiraNota + segundaNota;
media = soma / 2;		
	

printf("\n=== Resultado ===\n");
printf("\nNome: %s", nome);
printf("\n=== Notas ===\n");
printf("\nArtes: %.1f", primeiraNota);
printf("\nHistoria: %.1f", segundaNota);
printf("\nM�dia: %.1f", media);
if(media >= 9){
	printf("\nConceito de: A");
	printf("\nSitua��o: Aprovado :)");
}else{
	if(media >= 7.5 && media < 9){
		printf("\nConceito de: B");
		printf("\nSitua��o: Aprovado :)");
	}else{
		if(media >= 6 && media < 9){
			printf("\nConceito de: C");
			printf("\nSitua��o: Aprovado :)");
		}else{
			if(media < 4 && media < 6){
				printf("\nConceito de: D");
				printf("\nSitua��o: Reprovado :(");
			}else{
				if(media < 4){
					printf("\nConceito de: E");
					printf("\nSitu��o: Reprovado :(");
				}
			}
		}
	}
}	
	
	
return 0;	
}
