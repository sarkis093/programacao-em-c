#include<stdio.h>

int executa(int(*ptr)(int, int), int x, int y){
	return ptr(x,y);
}
int maior(int a, int b) {return (a > b) ? a : b; }
int soma(int a, int b) { return (a + b);}
int main(){

	int x, y, z;
	printf("Digite 2 numeros: \n");
	scanf(" %d %d", &x, &y);

	printf("Maior = %d\n", executa(maior,x,y));
	printf("Soma = %d\n", executa(soma,x,y));
	getchar();
	return 0;

}
