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
        printf("1 - Adicionar família \n");
        printf("2 - Sair e exibir resultados \n");
        printf("Digite a opção desejada: ");
        scanf("%i",&opcao);
       
        switch(opcao) {
            case 1:
                system("cls || clear");
                printf("========== PESQUISA ==========\n");
               
                printf("Digite a quantidade de filhos: ");
                scanf("%i",&filhos);
               
                printf("Digite o salário da família: ");
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
                printf("Opção inválida. \n");
                sleep(4);
                system("cls || clear");
        }
    } while (opcao != 2);
   
    if (quantidadeFamilias == 0) {
        printf("\nNão foram informados dados necessários.");
    } else {
        mediaSalario = somaSalario / (float) quantidadeSalarios;
        mediaFilhos = somaFilhos / (float) quantidadeFilhos;
       
        system("cls || clear");
        printf("\n=== Exibindo resultados ===\n");
        printf("Quantidade de famílias: %i \n", quantidadeFamilias);
        printf("Média salarial: R$ %.2f \n", mediaSalario);
        printf("Média de filhos: %.1f \n", mediaFilhos);
        printf("Maior salário: R$ %.2f \n", maiorSalario);
        printf("Menor salário: R$ %.2f \n", menorSalario);
    }
   
    return 0;
}
