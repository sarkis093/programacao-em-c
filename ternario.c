#include<stdio.h>

int main(){

	int numero, linha, coluna;
	int matriz[2][2] = {{1,2},{3,4}};

	printf("Digite um numero: ");
	scanf(" %d", &numero);
	printf("Numero digitado foi: %d\n", numero);

	numero > 10 ? printf("maior que 10\n") : printf("Menor que 10!\n");

	for(linha=0; linha <=1; linha++){
		for(coluna=0; coluna <=1; coluna++){
			if( matriz[linha][coluna] == matriz[1][0]){
				matriz[linha][coluna] = 5;
				printf("Matriz[%d][%d] =  %d\n",linha,coluna, matriz[linha][coluna]);
			}else{
				printf("Matriz[%d][%d] =  %d\n",linha,coluna, matriz[linha][coluna]);
			}
		}
	}


}
