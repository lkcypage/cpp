#include <stdio.h>
int senha;
int main(){
	
	
	do{
		printf("Digite sua senha \n");
		scanf(" %d", &senha);
		
		if(senha != 123456){
			printf("senha incorreta \n");
		} 
	}
	while(senha != 123456);
	printf("Acesso permitido");
	return 0;
		
}
