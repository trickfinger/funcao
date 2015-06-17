#include <stdio.h>
#include <math.h>


// Enumeração das opções do menu.
enum opcoes{
	OPC_SAIR,
	OPC_FIBONACCI_1, 	// Exibir o n1-ésimo elemento da sequência Fibonacci
	OPC_FIBONACCI_2, 	// Exibir o n2-ésimo elemento da sequência Fibonacci
	OPC_FATORIAL_1,		// Exibir o fatorial de n1
	OPC_FATORIAL_2,		// Exibir o fatorial de n2
	OPC_POTENCIA,		// Exibir o resultado da potência (n1)^n2
	OPC_SOMAPARES,		// Exibir a soma de todos os números pares entre n1 e n2
	OPC_SOMAIMPARES,	// Exibir a soma de todos os números ímpares entre n1 e n2
	OPC_SOMAPRIMOS,		// Exibir a soma de todos os números primos entre n1 e n2
	OPC_MAIORPRIMO,		// Exibir o maior primo existente entre n1 e n2
	OPC_MMC,			// Exibir o valor do mínimo múltiplo comum (mmc) entre n1 e n2
	OPC_MDC,			// Exibir o valor do máximo divisor comum (mdc) entre n1 e n2
	OPC_DESVIOPADRAO,	// Exibir o desvio padrão dos valores entre n1 e n2
	OPC_COMBINACAO,		// Exibir a combinação C(n1,n2)
	OPC_MEDIAHARMONICA,	// Exibir a media harmonica dos valores entre n1 e n2
	OPC_COEFICIENTEVARIACAO // Exibir o coeficiente de variacao dos valores entre n1 e n2
};


/* ---------------------- */
/* DECLARACAO DAS FUNCOES */
/* ---------------------- */

// Declare as funcoes aqui.
int fibonacci1(int a, int b);
int fibonacci2(int a, int b);
int fatorial1(int a, int b);
int fatorial2(int a, int b);
float potencia(int a, int b);
int somapar(int a, int b);
int somaimpar(int a, int b);
int somaprimos(int a, int b);
int maiorprimo(int a, int b);
int mmc(int a, int b);
int mdc(int a, int b);
float desvio(int a, int b);
float combinacao(int a, int b);
float harmonica(int a, int b);
float variacao(int a, int b);

/* ------------------------------ */
/* ROTINA PRINCIPAL				  */
/* ------------------------------ */
int main(){
	int n1, n2, //Armazenam os números n1 e n2 para os cálculos.
		opc; 	//Armazena a última opção selecionada pelo usuário.

	scanf("%d %d", &n1, &n2); //Lê os valores n1 e n2.
	scanf("%d", &opc);		  //Lê a opção do usuário.

	//Repete enquanto o usuário não selecionar a opção 0 - Sair.
	while(opc != OPC_SAIR){

		//Imprime o resultado de acordo com a opção selecionada.
		switch(opc){
			//-----------------------------------------------------------
			case OPC_FIBONACCI_1:			
				printf("%d\n", fibonacci1(n1, n2) ); // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_FIBONACCI_2:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_FATORIAL_1:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_FATORIAL_2:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_POTENCIA:
				printf("%.0f\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_SOMAPARES:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_SOMAIMPARES:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_SOMAPRIMOS:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MAIORPRIMO:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MMC:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MDC:
				printf("%d\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_DESVIOPADRAO:
				printf("%.2f\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_COMBINACAO:
				printf("%.2f\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_MEDIAHARMONICA:
				printf("%.2f\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------

			//-----------------------------------------------------------
			case OPC_COEFICIENTEVARIACAO:
				printf("%.2f\n", );  // COMPLETE O PRINTF
			break;
			//-----------------------------------------------------------
		}

		scanf("%d", &opc); //Lê a opção do usuário.

	}

	//Finaliza o programa.
	return (0);
}


/* ------------------------- */
/* IMPLEMENTACAO DAS FUNCOES */
/* ------------------------- */

// Implemente as funcoes aqui.
		int fibonacci1(int a, int b){
	int i, soma, fiba = 1, fibb = 1;		
		for(i=0;i<a;i++)
			soma = fiba + fibb;
			fiba = fibb;
			fibb = soma;
	return(soma);
}

int fibonacci2(int a, int b){
	int i, soma, fiba = 1, fibb = 1;		
		for(i=0;i<b;i++)
			soma = fiba + fibb;
			fiba = fibb;
			fibb = soma;
	return(soma);
}
int fatorial1(int a, int b){
	int i, fat, fata;
		for(i=0;i<a;i++)
			fat  ;
			fata--;
	return(fat)
}
int fatorial2(int a, int b);
float potencia(int a, int b);
int somapar(int a, int b);
int somaimpar(int a, int b);
int somaprimos(int a, int b);
int maiorprimo(int a, int b);
int mmc(int a, int b);
int mdc(int a, int b);
float desvio(int a, int b);
float combinacao(int a, int b);
float harmonica(int a, int b);
float variacao(int a, int b);
