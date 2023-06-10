#include <stdio.h>
//Biblioteca para conseguir utilizar fgets
#include<string.h>

//Struct
typedef struct{
	int codigo;
	char nome[15];
	int quantidade;
} Estoque;


int main(){
	//Declarando produtos
	Estoque produto1;
	Estoque produto2;
	//Armazenando codigo do produto via scan
	scanf ("%d%*c", &produto1.codigo);
	//Armazenando codigo forma padrão
	produto2.codigo = 2;
	
	//Armazenando string utilizando fgets
	//stdin que dizer que estou recebendo valor do teclado, mas poderia ser um arquivo
	fgets(produto1.nome,15,stdin);
	//Limpando buffer
	fflush(stdin);
	//Armazenando valor padrão 
	strcpy(produto2.nome,"Raquete");
	
	//Armazenando valor de quantidade
	scanf("%d%*c", &produto1.quantidade);	
	produto2.quantidade = 104;
	
	//Imprimindo produto01
	printf("Codigo: %d \n", produto1.codigo);
	printf("Nome: %s", produto1.nome);
	printf("Quantidade: %d \n", produto1.quantidade);	
	
	//Imprimindo produto02
	printf("Codigo: %d \n", produto2.codigo);
	printf("Nome: %s \n", produto2.nome);
	printf("Quantidade: %d \n", produto2.quantidade);
	return 0;

	
}
