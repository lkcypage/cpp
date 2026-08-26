
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char i[20];
int a;
int main() {
	printf("_____________________________________________________________________\n");
	printf("________INICIO________BANCO DE DADOS__________SUPORTE___________EXIT_\n\n\n");
	printf("ESCOLHA UMA OPCAO(inicio/banco/suporte)");
	scanf("%8s", &i);
	if(strcmp(i, "inicio") == 0) {
		printf("________INICIO_______________________________________________________\n");
		printf("______________________BANCO DE DADOS__________SUPORTE___________EXIT_\n\n\n");
		printf("PARA AEP!!!!!");
		return 0;
	} else if(strcmp(i, "banco") == 0) {
		printf("______________________BANCO DE DADOS_________________________________\n");
		printf("________INICIO________________________________SUPORTE___________EXIT_\n\n\n");
		printf("ESCOLHA MODO /ESCRITA 1/LEITURA 2(1/2): ");
		scanf("%d", &a);
		FILE *arquivo;
		switch(a){
			case 1:
				char ocorrencia[1000];
				arquivo = fopen("Arquivo.txt", "w");
				printf("ESCREVA OCORRENCIA ate 1000 caracteres: \n");
				fprintf(arquivo, "\n\n\n RELATORIO:  \n");
				getchar();
				fgets(ocorrencia, sizeof(ocorrencia), stdin);
				fprintf(arquivo, "%s", ocorrencia);
				fclose(arquivo);
				break;
			case 2:
				printf("Armazenamento maximo 1000000 Caracteres");
				char leitura[1000000];
				arquivo = fopen("Arquivo.txt", "r");	
				while (fgets(leitura, sizeof(leitura), arquivo) != NULL) {
        			printf("%s", leitura);
				}
				fclose(arquivo);
				break;
		}
	} else {
		printf("ERRO");
	}

}
