//ler maior numero 

#include<stdio.h>
int pr_valor;
int se_valor;
int main(){
	printf("primeiro valor: ");
	scanf("%d", &pr_valor);
	printf("segundo valor: ");
	scanf("%d", &se_valor);
	if(pr_valor > se_valor){
		printf("maior: %d", pr_valor);
	}
	else{
		printf("maior: %d", se_valor);
	}
}
