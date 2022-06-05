#include<stdio.h>
int main(){

int num, num2;

printf("Digite um numero: ");
scanf("%d", &num);

printf("Digite outro numero: ");
scanf("%d", &num2);

if(num>num2){
printf("\n%d eh maior que %d", num,num2);

}else{
printf("\n%d eh maior que %d", num2,num);

}
return 0;
}
