#include <stdio.h>
//subitrador
int p01;
int p02;
int resultado;

int main(){
	printf("Primeiro numero:");
	scanf("%d", &p01);
	printf("Segundo numero:");
	scanf("%d", &p02);
	resultado = p01 - p02;
	printf("resultado: %d", resultado);
	return 0;
}
