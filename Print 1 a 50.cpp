#include <stdio.h>
#include <stdlib.h>

int numeros;
int i; 
int e;
int main(){
	while(i <= 50){
		printf(" digite o numero %d: ", i);
		scanf(" %d", &numeros);
		printf(" %d", numeros);
		scanf(" \n", &e);
		if(e == '\n'){
			system("cls");	
		}
		i++;
	}







}
