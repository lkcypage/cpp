#include <stdio.h>

int main()
{
    char jogador[30];
    int idade;
    int numero;
    float salario;
    float altura;

    printf("\n===== CADASTRO DE JOGADOR =====");

    printf("\n\nDigite o nome do jogador: ");
    scanf("%s", &jogador);

    printf("\nDigite a idade: ");
    scanf("%d", &idade);

    printf("\nDigite o numero da camisa: ");
    scanf("%d", &numero);

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    printf("\nDigite o salario: ");
    scanf("%f", &salario);

    if(idade >= 18 && altura >= 1.80)
    {
        printf("\nJogador aprovado!");
    }
    else
    {
        printf("\nJogador reprovado!");
    }

    if(numero > 0 && numero < 100);
    {
        printf("\nNumero da camisa valido!");
    }

    printf("\n\n===== DADOS DO JOGADOR =====");

    printf("\nNome: %s", jogador);
    printf("\nIdade: %d", idade);
    printf("\nCamisa: %d", numero);
    printf("\nAltura: %.2f", altura);
    printf("\nSalario: %.2f", salario);
    return 0;
}
