
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char i[20];
char ocorrencia[1000];
int a;
int main(){
	printf("_____________________________________________________________________\n");
	printf("________INICIO________BANCO DE DADOS__________SUPORTE___________EXIT_\n\n\n");
	printf("ESCOLHA UMA OPCAO(inicio/banco/suporte)");
	scanf("%8s", &i);
	if(strcmp(i, "inicio") == 0){
		printf("________INICIO_______________________________________________________\n");
		printf("______________________BANCO DE DADOS__________SUPORTE___________EXIT_\n\n\n");
		printf("PARA AEP!!!!!");
		return 0;
	}
	else if(strcmp(i, "banco") == 0){
		printf("ESCOLHA MODO /ESCRITA 1/LEITURA 2: ");
		scanf("%d", &a);
		FILE *arquivo;
		switch(a){
			case 1:
				arquivo = fopen("Arquivo.txt", "w");
				printf("______________________BANCO DE DADOS_________________________________\n");
				printf("________INICIO________________________________SUPORTE___________EXIT_\n\n\n");
				printf("ESCREVA OCORRENCIA: \n");
				scanf("%s", &ocorrencia);
				fprintf(arquivo, "\n\n\n RELATORIO:\n");
				fprintf(arquivo, ocorrencia);
				fclose(arquivo);
				if (arquivo == NULL) {
			 		printf("Erro ao abrir o arquivo!\n");
					return 1;
				}
				return 0;
				break;
			case 2:
				arquivo = fopen("Arquivo.txt", "r");
				while(fgets(ocorrencia, sizeof(ocorrencia), arquivo) != NULL){
        			printf("%s", ocorrencia);
        		}
        		if (arquivo == NULL) {
			 		printf("Erro ao abrir o arquivo!\n");
					return 1;
				fclose(arquivo);
				}
    			break;
		}
	}
	else {
		printf("ERRO");
	}
	
}
