#include <stdio.h>

int main (void){
int anoatual;
int anodenascimento;
int idade;
printf("Digite o ano atual:\n");
scanf("%d", &anoatual);

printf("Digite o ano de nascimento:\n");
scanf("%d", &anodenascimento);

idade=(anoatual-anodenascimento);

printf ("A idade e: => %d",idade);

return 0;
}
