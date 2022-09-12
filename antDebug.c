#include<stdio.h>
#include<sys/ptrace.h>

int main(){

	if(ptrace(PTRACE_TRACEME,0,1,0) < 0){
		printf("Antdebugger Bye...\n");
		return 1;
	}
	printf("Hallo\n");

	int linha, coluna;
	int matriz[2][2]; 

	for(linha=0; linha <=1; linha++){
		for(coluna=0; coluna <=1; coluna++){
			matriz[linha][coluna] = 0;
			printf("Matriz[%d][%d] =  %d\n",linha,coluna, matriz[linha][coluna]);
		}
	}
	
return 0;
}
