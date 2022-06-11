#include <stdlib.h>
#include <stdio.h>
int main(){
    
int j;
int soma = 0;
int valor_digitado;


while( soma <=999){
 j++;
printf("\nDigite um numero: ");
scanf("%d", &valor_digitado);

soma = soma + valor_digitado;
printf("\nSoma: %d", soma);

}

return 0;
}