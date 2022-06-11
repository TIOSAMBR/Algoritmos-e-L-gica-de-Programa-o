
#include <stdlib.h>
#include <stdio.h>
int main (){
int num=500 ;
printf("Digite qualquer coisa: ");
scanf("%d",&num);
for(int i=300;i<500;++i){
	if (i%2==1)
	printf("%d\n",i);
}
}