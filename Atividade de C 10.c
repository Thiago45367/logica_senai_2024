#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>


int main() {
	setlocale(LC_ALL,"");
	
	// variaveis.
	char login[200], senha[200], loginCadastrado[200] = "BOB", senhaCadastrado[200] = "345";
	
	// dados do usúarios.
	do{
		
	printf("Digite o login: ");
	scanf("%s",&login);

	printf("Digite a senha: ");
	scanf("%s",&senha);	
		
}while (strcmp(login, loginCadastrado) != 0 && strcmp(senha, senhaCadastrado) != 0);

printf("\nAcesso autorizado. \n");
	
	
return 0;	
}
