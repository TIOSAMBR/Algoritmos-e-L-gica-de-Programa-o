#include <stdio.h>

int main(){
    //Exibe os numeros de 1 até 10
    int contador; //Faz o controle de vezes que o laco for sera

    for( contador = 1 ; contador <= 10 ; contador++ ){
        printf("Contador = %d\n", contador);
    }

    int i; //Contador
    //Exibe os numeros de 10 até
    for( i = 10 ; i >= 1 ; i--){
        printf("\ti = %d", i);
    }

    // Recebe 3 valores diigitados pelo usuario
    // e realiza a soma deles.

    int j; //Contador
    int soma = 0;
    int valor_digitado;

    for( j = 1; j <= 3; j++){
        printf("Digite um numero:");
        scanf("%d", &valor_digitado); //armazena o resultado da soma

        soma = soma + valor_digitado;
        printf("\nSoma: %d", soma);
    }

    return 0;

}
