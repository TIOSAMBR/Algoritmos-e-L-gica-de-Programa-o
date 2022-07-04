#include <stdio.h>
int main()
{
    int matriz[5][4], contagem = 0;
    //preenchimento da matriz
    for(int linha=0; linha<5; linha++)
    {
        for(int coluna=0; coluna<4; coluna++)
        {
            printf("%dª linha, %dª coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
     //contagem > 10
    for(int linha=0; linha<5; linha++)
        for(int coluna=0; coluna<4; coluna++)
            if(matriz[linha][coluna] > 10)
                contagem++;
    printf("\n\n Existem na matriz %d números maiores que 10.", contagem);
    return 0;
}
