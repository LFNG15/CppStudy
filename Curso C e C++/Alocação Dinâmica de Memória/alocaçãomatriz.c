#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, i, j;
    int **matriz;

    printf("Digite o numero de linhas:");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas:");
    scanf("%d", &colunas);

    matriz = (int **)malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}