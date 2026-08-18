
#include <stdio.h>

int palpite;

int main(){
	printf("Qual o valor que deseja saber: ");
	scanf("%d", &palpite);
	if (palpite > 0){
		printf("Maior");
	}
	else if (palpite < 0){
		printf("Menor");
	}
	else{
		printf("Zero");
	}
}