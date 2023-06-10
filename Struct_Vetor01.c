#include <stdio.h>
#include <string.h>
#define n 2

//struct
typedef struct{
	int codigo;
	char nome[10];
	int quantidade;
}Produto;

//funçaõ que armazena
Produto armazenar(Produto prod[]){
	int x;
	for(x = 0; x < n; x++){
		printf("Digite o codigo do produto: ");
		scanf("%d%*c", &prod[x].codigo);
		fflush(stdin);
		printf("Digite o nome do produto: ");
		fgets(prod[x].nome,10,stdin);
		printf("Digite a quantidade do produto: ");
		scanf("%d", &prod[x].quantidade);
	}
}

//função que imprimi
void imprimir(Produto prod[]){
	int x;
	printf("\n");
	for(x = 0; x < n; x++){
		printf("Digite o codigo do produto: %d \n",prod[x].codigo);
		printf("Nome do produto: %s", prod[x].nome);
		printf("Quantidade do produto: %d \n", prod[x].quantidade);
	}
}

// main
int main(){
	//declarando vetor prod do tipo produto
	Produto prod[n];
	int x;
	armazenar(prod);
	imprimir(prod);
}
