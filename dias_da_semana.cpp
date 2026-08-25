
#include <stdio.h>
int dia_da_semana;
int main(){
	printf("De um numero de 1 a 7 correspondente ao dia da semana: ");
	scanf("%d", &dia_da_semana);
	if (dia_da_semana == 1){
		printf("SEGUNDA");
	}
	else if (dia_da_semana == 2){
		printf("TERCA");
	}
	else if (dia_da_semana == 3){
		printf("QUARTA");
	}
	else if (dia_da_semana == 4){
		printf("QUINTA");
	}
	else if (dia_da_semana == 5){
		printf("SEXTA");
	}
	else if (dia_da_semana == 6){
		printf("SABADO");
	}
	else if (dia_da_semana == 7){
		printf("DOMINGO");
	}
}
