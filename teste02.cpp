#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *arquivo;
int main(){	
	char ocorrencia[1000];
	arquivo = fopen("Arquivo.txt", "w");
	printf("ESCREVA OCORRENCIA ate 1000 caracteres: \n");
	fprintf(arquivo, "\n\n\n RELATORIO:  \n");
	fgets(ocorrencia, sizeof(ocorrencia), stdin);
	fprintf(arquivo, "%s", ocorrencia);
	fclose(arquivo);
	return 0;
}
