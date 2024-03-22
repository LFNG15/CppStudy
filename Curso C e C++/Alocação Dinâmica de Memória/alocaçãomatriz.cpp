#include <iostream>
#include <new>

int main()
{
    int numeroLinhas, numeroColunas, i, j;
    int **matriz;

    std::cout << "Digite o valor de linhas";
    std::cin >> numeroLinhas;
    std::cout << "Digite o valor de colunas";
    std::cin >> numeroColunas;

    matriz = (int **)new int(numeroLinhas);

    for (i = 0; i < numeroLinhas; i++)
    {
        matriz[i] = (int *)new int(numeroColunas);
    }

    for (i = 0; i < numeroLinhas; i++)
    {
        for (j = 0; j < numeroColunas; j++)
        {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}