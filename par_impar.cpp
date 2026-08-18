#include <stdio.h>

int palpite;

int main(){
	printf("Ler valor(Par ou Impar): ");
	scanf(" %d", &palpite);
	if (palpite % 2 == 0){
		printf("Par");
	}
	else {
		printf("Impar");
	}
}