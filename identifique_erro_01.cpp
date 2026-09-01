#include <stdio.h>

int main()

{
    char nome[10];
    int idade;
    float altura;
    int op;
    printf("\n --- PARQUE DE DIVERSAO ---");
    printf("\n Selecioner operacao(1 - 4): ");
	scanf(" %d",&op);
    switch(op){
        case 1:
            printf("\n\nMontanha Russa");
            break;

        case 2:
            printf("\nThe King");
            break;

        case 3:
            printf("\nKamikaze");
            break;

        case 4:
            printf("\nBooster");
            break;

        default:
            printf("\nOpcao invalida");
    }

    printf("\nInsira seu nome: ");
    scanf("%s", nome);

    printf("\nInsira sua idade: ");
    scanf("%d", &idade);

    printf("\nInsira sua altura: ");
    scanf("%f", &altura);

    if(idade > 16 && altura > 1.60){
        printf("\nEntrada permitida para o brinquedo");
    }
    else{
        printf("\nEntrada negada para o brinquedo");
    }

    printf("\nNome: %s", nome);

    return 0;
}
