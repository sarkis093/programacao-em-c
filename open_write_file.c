#include<stdio.h>
#include<string.h> 
#include<unistd.h> //execl()
#include<stdlib.h> //system()
#define LEN 5

int func(char *a){
	printf("Valor de a %s\n", a );
	return 0;
}
//Recursão
int chamada(int chama){
	printf(" %d\n",chama);
	if(chama > 0)
	chama = chamada(chama - 1);// Chamada a ela mesma.
}

int main(){

FILE *arq;
unsigned char *frase[50];

func("alo");
setuid(0);
//execl("/bin/sh","sh",0);
system("uname -a");

unsigned int *f;

f = (int*) malloc(LEN* sizeof(int));
if(f == NULL){
	printf("Sem memoria.\n");
	exit(1);
}
/*
int num;
for(int x=0; x < LEN; x++){
	printf("[%d] Digite Numero:\n",x);
	scanf(" %d", &f[x]);
}
*/
free(f);
printf("Tamanho de *f: %d\n", sizeof(&f));

arq = fopen("/home/sarkis/teste.txt","a");//Abre o arquivo.

if(arq == NULL){
	printf("Error");
	return 1;
}else{
	printf("Escreva algo ");
}

scanf(" %s", frase);		//Lê a frase digitada.
fprintf(arq,"%s\n",frase);	//Atribui ao arquivo o que acabou de ser digitado.
fclose(arq);			//Fecha o arquivo.

chamada(LEN);


}



