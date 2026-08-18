
//calcule aumento de salário
#include <stdio.h>

int aumento;
int salario;
int resultado;

int main(){
	printf("Insira salario: ");
	scanf(" %d", &salario);
	printf("Aumento: ");
	scanf(" %d", &aumento);
	resultado = salario * aumento / 100;
	printf("Seu aumento foi de: \n");
	printf(" %d", resultado);
	return 0;
}