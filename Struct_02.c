#include <stdio.h>

//Struct
typedef struct{
	int cadastro;
	float imposto;
	int atrasos;
	float multa;
	float total;
}Imovel;

int main(){
	//Declarando 
	Imovel imovel01;
	
	//Armazenando valores 
	printf("Cadastro do imovel: ");
	scanf("%d", &imovel01.cadastro);
	printf("Valor imposto imovel: ");
	scanf("%f", &imovel01.imposto);
	printf("Meses atraso: ");
	scanf("%d", &imovel01.atrasos);
	
	// Se o valor de meses em atraso for maior que 0 entra no if
	if(imovel01.atrasos > 0 ){
		
		imovel01.total = imovel01.imposto + (imovel01.atrasos * 50);
		imovel01.multa = imovel01.atrasos * 50;
		
	}
	
	//Mostrando na tela o resultado	
	printf("Cadastro imovel: %d \n", imovel01.cadastro);
	printf("Imposto do imovel: %.2f \n", imovel01.imposto);
	printf("Meses em atraso: %d \n", imovel01.atrasos);
	printf("Valor total de multa: %.2f \n", imovel01.multa);
	printf("Valot total a pagar: %.2f \n", imovel01.total);
	
	return 0;
	
}
