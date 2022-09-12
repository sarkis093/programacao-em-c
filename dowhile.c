#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

typedef struct{
int dia, mes, ano;
}data;

int main(){
int var=0;
do{
	printf("Digite um valor diferente de zero para sair! ");
	var = -1;
	scanf("%d",&var);

}while(var == 0);
if(var < 0){
	printf("Valor invalido\n");
}else{
	printf("Valor digitado: %d\n", var);
}
data *d;
d = malloc(sizeof(data));
d->dia=01; d->mes=12; d->ano=2019;

printf("Tamanho em Bytes: %d\n", sizeof(*d));
printf("Dia: %d , Mes: %d, Ano: %d\n", d->dia, d->mes, d->ano);
free(d);
printf("Tamanho em Bytes depois: %d\n", sizeof(*d));

//ARRAY

int num[5] = {1,2,3,4,5};
char ch[5] = {'a','b','c','d','e'};

for(int c=0; c<5;){
		printf("Array numero: %d\n", num[c]);
		printf("Array de char: %c\n", ch[c]);
c++;
}
char figA = '#';
char fig = '*';
for(int f=1; f<=5;f++){
	printf("%c\n",figA );
	for(int j=0; j<f; j++){
		printf("%c",fig);
	}
}

}

