#include <stdio.h>
#include <String.h>
#define n 3

typedef struct{
	char nome[20];
	float media,nota1,nota2,nota3;
}Aluno;

void imprimir(Aluno aluno[]){
	int x;
	for(x = 0; x < n; x++){
		printf("Nome aluno: %s",aluno[x].nome);
		printf("Primeira nota: %f \n", aluno[x].nota1);
		printf("Segunda nota: %f \n", aluno[x].nota2);
		printf("Terceira nota: %f \n", aluno[x].nota3);
		printf("Media aluno: %f \n", aluno[x].media);
		prinft("");
	}
}

void preencher(float n1, float n2,float n3, Aluno aluno[],int x){
		aluno[x].nota1 = n1;
		aluno[x].nota2 = n2;
		aluno[x].nota3 = n3;
		aluno[x].media = (n1 + n2 + n3) / 3;
}

void ler(Aluno aluno[]){
	int x;
	float nota1,nota2,nota3;
	for (x = 0;x < n;x++){
		fflush(stdin);
		printf("Digite o nome do aluno: ");
		fgets(aluno[x].nome,20,stdin);
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		printf("Digite a terceira nota: ");
		scanf("%f", &nota3);
		preencher(nota1,nota2,nota3,aluno,x);
	}	
}


int main(){
	Aluno aluno[n];
	ler(aluno);
	imprimir(aluno);
	
}
