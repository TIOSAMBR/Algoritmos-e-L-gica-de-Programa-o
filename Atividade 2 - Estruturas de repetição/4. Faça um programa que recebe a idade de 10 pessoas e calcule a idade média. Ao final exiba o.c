#include <stdlib.h>
#include <stdio.h>
int main (){
int p1, p2 ,p3 ,p4 ,p5 ,p6 ,p7 ,p8 ,p9 ,p10 , media ;
	 
	//Entrada de dados
	printf("Digite idade da primeira pessoa: ");
	scanf("%d",&p1);
	printf("Digite idade da segunda pessoa: ");
	scanf("%d",&p2);
	printf("Digite idade da terceira pessoa: ");
	scanf("%d",&p3);
	printf("Digite idade da quarta pessoa: ");
	scanf("%d",&p4);
	printf("Digite idade da quinta pessoa: ");
	scanf("%d",&p5);
	printf("Digite idade da sexta pessoa: ");
	scanf("%d",&p6);
	printf("Digite idade da setima pessoa: ");
	scanf("%d",&p7);
	printf("Digite idade da oitava pessoa: ");
	scanf("%d",&p8);
	printf("Digite idade da nona pessoa: ");
	scanf("%d",&p9);
	printf("Digite idade da decima pessoa: ");
	scanf("%d",&p10);
	
	
	//Processamento
	media = (p1 + p2+ p3+ p4+ p5+ p6+ p7+ p8+ p9+ p10) / 2;
	
	//Saída
	printf("Media de idade = %d\n",media);
	
	
	
}