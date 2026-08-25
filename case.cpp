
#include <stdio.h>
int op;
int main(){
	printf("De um numero de 1 a 7 correspondente ao dia da semana: ");
	scanf("%d", &op);
	switch(op){
		case 1:
			printf("SEGUNDA");
			break;
		case 2:
			printf("TERCA");
			break;
		case 3:
			printf("QUARTA");
			break;
		case 4:
			printf("QUINTA");
			break;
		case 5:
			printf("SEXTA");
			break;
		case 6:
			printf("SABADO");
			break;
		case 7:
			printf("DOMINGO");
			break;
	}
}
