#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]){
int contador, soma;
 soma=0;
for(contador = 100; contador <= 200; contador++){
 soma = soma + contador;
 }
 printf("A soma de todos os numeros de 100 a 200 eh: %d", soma);
 getch();
} 