#include <stdio.h>
#include <string.h>
int main(){
	int idade;
	char nome[50];
	char vfnome[50];
	int vfidade;
	
	printf("----Cadastro----\n");
	printf("Seu nome: ");
	scanf("%s", &nome);
	printf("Sua idade: ");
	scanf("%d", &idade);
	
	
	do{
		printf("----Verificação----\n");
		printf("Seu nome:\n");
		scanf("%s", &vfnome);
		printf("Sua idade:\n");
		printf("Digite 0 para sair\n");
		scanf("%d", &vfidade);
		if(vfidade < idade){
			printf("MENOR\n");
		}		
		else if(vfidade > idade){		
			printf("MAIOR\n");
		}
		else{
			printf("IGUAL\n");
		}
		
		if (strcmp(vfnome, nome) == 0 && vfidade == idade){
			printf("Acesso concedido\n");
		}
		else{
			printf("Acesso negado\n");
		}
	}while(idade != 0);
	return 0;
}
