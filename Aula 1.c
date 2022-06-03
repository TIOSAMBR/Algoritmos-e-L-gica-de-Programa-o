#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor; //declarando variavel do tipo inteiro
    valor = 20; //atribuindo o valor 20 para a variavel

    printf ("Primeiro algoritmo"); //printf = mesmo que a função ESCREVA, no portugol
    printf ("\n O valor e: %d", valor); //%d = exibe valor do tipo inteiro
        // o comando \n cria uma nova linha
        //duas barras = comentario

    int idade;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade); //scanf = lê o proximo valor digitado

    printf("\n Sua idade e: %d", idade);

    int soma = 0;

    soma = valor + idade; //realiza a soma entre duas variaveis

    printf("\n Resultado da soma: &d", soma);


return 0;
}