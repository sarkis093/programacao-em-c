//Libs
#include<stdio.h>
#include<stdlib.h>

//Define uma constante
#define MAX 10

//Prototipo da funcao
void insertion_sort(int *a);

//Funcao main()
int main(int argc, char** argv)
{
int i, vet[MAX];
//Lê MAX ou 10 valores
for(i =0; i<=MAX; i++)
{
	printf("Digite um valor: ");
	scanf(" %d",&vet[i]);
}
//Order values
insertion_sort(vet);

for(i =0; i<=MAX; i++)
{
	printf("Valor: %d\n",vet[i]);
}
getchar();
return 0;
}

void insertion_sort(int *a)
{
	int i, j, tmp;
	for(i=1; i< MAX; i++)
	{
		tmp = a[i];
		for(j = i-1; j>=0 && tmp < a[j]; j--)
		{
			a[j+1] = a[j];
		}
		a[j+1] = tmp;
	}
}
