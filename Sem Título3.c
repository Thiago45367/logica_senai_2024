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
	int i;
	// dados do usúarios.
	for (i = 1; i <= 3; i++) {	
		printf("Digite o login: ");
		scanf("%s",&login);
	
		printf("Digite a senha: ");
		scanf("%s",&senha);	
		
	 if (strcmp(login, loginCadastrado) != 0 && strcmp(senha, senhaCadastrado) != 0) {
		printf("\nLogin ou senha incorretos. \nTentativa %i de 3 \n", i);
		sleep(3);
		system("cls || clear");
	}else {
		printf("\nAcesso autorizado. \n");
		break;
	}

}
	
	
return 0;	
}
