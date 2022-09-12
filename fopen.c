#include<stdio.h>
#include<stdlib.h>
int main()
{
char url[]="arquivo.txt";
char ch;
FILE *arquivo;

printf("Digite um caracter: \n");
ch=getchar();

arquivo = fopen(url, "w");
if (arquivo == NULL ){
	printf("Erro ao abrir\n");
	fclose(arquivo);
	exit(1);
}else{
	fputc(ch,arquivo);
	fclose(arquivo);
}
return 0;
}
