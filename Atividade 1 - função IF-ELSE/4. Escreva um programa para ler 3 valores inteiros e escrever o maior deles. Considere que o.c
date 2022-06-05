#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;

    printf("Digite o primeiro numero =>");
    scanf("%d",&a);
    printf("Digite o segundo numero =>");
    scanf("%d",&b);
    printf("Digite o terceiro numero =>");
    scanf("%d",&c);

    if(a > b && a > c)
        printf("%d", a);
    else
    if(b>a && b>c)
        printf("%d", b);
    else
        printf("%d", c);
}
