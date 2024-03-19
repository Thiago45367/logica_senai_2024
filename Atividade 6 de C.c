#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
 //variaveis.
 	
char loginCadastrado[200] = "BOB";
char senhaSalva[200] = "5678";
char login[200];
char senha[200];

printf("Digite o login: ");
scanf("%s",&login);

printf("Digite a senha: ");
scanf("%s",&senha);

 // if (login == loginSalvo && senha == senhaSalva)
if(strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaSalva) == 0) {
	printf("BEM VINDO :]");
} else {
	printf("ACESSO NEGADO :[");
}	
	
	return 0;
}
