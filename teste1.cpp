#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ocorrencia;
int main(){
	FILE *arquivo;
	arquivo = fopen("Arquivo.txt", "a");
	printf("ESCREVA OCORRENCIA: \n");
	scanf("%s", &ocorrencia);
	fprintf(arquivo, "\n\n\n RELATORIO:\n");
	fprintf(arquivo, "%s", ocorrencia);
	fclose(arquivo);
	return 0;
}
		

