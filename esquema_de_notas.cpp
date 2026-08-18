
//esquema de notas
#include <stdio.h>
#include <string.h>
int notas;
int media;
char nome_do_aluno[30];
int main(){
	printf("Seu nome: ");
	scanf("%s", &nome_do_aluno);
	printf("Insira media: ");
	scanf("%d", &media);
	printf("Insira notas: ");
	scanf("%d", &notas);
	
if (notas >= media){
		printf("Aprovado \n");
		printf("Nome do aluno: %s", nome_do_aluno);
	}
	else{
		printf("Reprovado \n");
		printf("Nome do aluno: %s", nome_do_aluno);
	}
}
