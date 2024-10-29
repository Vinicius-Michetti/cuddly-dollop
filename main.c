#include <stdio.h>
#include <stdlib.h>

/*
Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa um procedimento que
escreva os elementos da diagonal secundária.
*/

const int MAX_LIN = 3;

void DiagonalSecundaria (int matriz[MAX_LIN][MAX_LIN]){

     printf("Os elementos da matriz secundaria sao: ");

     for (int i = 0; i < MAX_LIN; i++){
            printf("%d ", matriz[i][MAX_LIN - 1 - i]);
     }
}

int main()
{
    int matriz[MAX_LIN][MAX_LIN];

    for (int i = 0; i < MAX_LIN; i++){
        for (int j = 0; j < MAX_LIN; j++){
            printf("Digite o elemento da lina %d, coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    DiagonalSecundaria(matriz);
}
