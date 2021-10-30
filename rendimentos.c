#include <iostream>
#include <stdio.h>
#include <string.h>

//Programa para Calcular rendimentos de investimento

int calcular24( int invest) {
	const int planA= (invest*0.02)*24;
	
	 return planA;		
}

int calcular12( int invest) {
	const int planB= 0.008*invest*12;
	
	 return planB;		
}

int main(int argc, char** argv) {
	char nome[20];
	int invest = 0;
	int rendimento12 = 0;
	int rendimento24 = 0;
	 
	printf(".:: Capital Investimmentos ::.\n\n");
	 printf("Ola, qual seu nome? ");
	 scanf("%s", &nome);
	 
	 printf("Qual valor inicial para investimento : ");
	 scanf("%d", &invest);
	 
	 rendimento12= calcular12(invest);
	 rendimento24= calcular24(invest);
	 
	 printf("\n Prezada %s, \n ", nome);
	 printf("\n investindo %d  reais hoje, em 12 meses voce tera um rendimento de %d reais, com taxa de juros de 0,8 porcento ao mes.\n",  invest, rendimento12);
	 printf("Para o mesmo valor investido em 24 meses com rendimento de 2 porcento ao mes, rendera %d reais.",rendimento24 );
	 
	return 0;
}
