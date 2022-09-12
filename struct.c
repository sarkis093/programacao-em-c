#include<stdio.h>

typedef struct aluno{
	char nome[50], end[50];
	int idade;
	float altura;
}ALUNO;

void imprimir(ALUNO *aluno){
	printf(" Aluno: %s\n Endereco: %s\n Idade: %i\n Altura: %.2f\n"
		,aluno->nome
      		,aluno->end 
		,aluno->idade 
		,aluno->altura );
}

int main()
{
ALUNO aluno = {"Guilherme", "Rua Palmeira", 25, 1.72};
ALUNO aluno1 = {"Joao Pedro", "Rua Aviao", 12, 1.80};

imprimir(&aluno);
printf(" Nome: %s\n End: %s\n Idade: %d\n Alt: %.2f\n"
	,aluno1.nome,aluno1.end,aluno1.idade,aluno1.altura);
}
