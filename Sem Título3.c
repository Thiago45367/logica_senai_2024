#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");
   
    int opcao, quantidadeFamilias = 0, quantidadeSalarios = 0;
    int filhos, quantidadeFilhos = 0, somaFilhos = 0;
    float salario, somaSalario = 0, mediaSalario, mediaFilhos;
    float maiorSalario = INT_MIN, menorSalario = INT_MAX;
   
    do {
        system("cls || clear");
        printf("========== MENU ==========\n");
        printf("1 - Adicionar fam�lia \n");
        printf("2 - Sair e exibir resultados \n");
        printf("Digite a op��o desejada: ");
        scanf("%i",&opcao);
       
        switch(opcao) {
            case 1:
                system("cls || clear");
                printf("========== PESQUISA ==========\n");
               
                printf("Digite a quantidade de filhos: ");
                scanf("%i",&filhos);
               
                printf("Digite o sal�rio da fam�lia: ");
                scanf("%f",&salario);
               
                quantidadeFamilias++;
                quantidadeSalarios++;
                quantidadeFilhos++;
               
                somaSalario += salario;
                somaFilhos += filhos;
               
                if (salario > maiorSalario) {
                    maiorSalario = salario;
                }
               
                if (salario < menorSalario) {
                    menorSalario = salario;
                }
               
                break;
            case 2:
                break;
            default:
                printf("Op��o inv�lida. \n");
                sleep(4);
                system("cls || clear");
        }
    } while (opcao != 2);
   
    if (quantidadeFamilias == 0) {
        printf("\nN�o foram informados dados necess�rios.");
    } else {
        mediaSalario = somaSalario / (float) quantidadeSalarios;
        mediaFilhos = somaFilhos / (float) quantidadeFilhos;
       
        system("cls || clear");
        printf("\n=== Exibindo resultados ===\n");
        printf("Quantidade de fam�lias: %i \n", quantidadeFamilias);
        printf("M�dia salarial: R$ %.2f \n", mediaSalario);
        printf("M�dia de filhos: %.1f \n", mediaFilhos);
        printf("Maior sal�rio: R$ %.2f \n", maiorSalario);
        printf("Menor sal�rio: R$ %.2f \n", menorSalario);
    }
   
    return 0;
}
