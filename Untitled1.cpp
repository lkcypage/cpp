#include <stdio.h>
//adicionador
int x;
int y;
int soma;

int main(){
	printf("digite o primeiro valor: ");
	scanf("%d",&x);
	printf("digite o segundo valor: ");
	scanf("%d",&y);
	// i = input(Scanf)
	// o = output(printf)
	soma = x + y;
	printf("O resultado é:%d", soma);
	return 0;
}

