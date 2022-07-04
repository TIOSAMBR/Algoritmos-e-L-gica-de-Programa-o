#include<stdio.h>
int main()
{
 int valor[15], i;
 for(i=0; i<15; i++)
 {
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &valor[i]);
 }
 printf("\nO ordem inversa dos valores entrados e:\n");
 for(i=0; i<15; i++)
 printf("%d\n", valor[14-i]);
}
