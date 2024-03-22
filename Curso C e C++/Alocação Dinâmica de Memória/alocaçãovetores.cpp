#include <iostream>
#include <new>
#include <string>

int main()
{
    int tamanho, cont;

    std::cout << "Digte o tamanho: ";
    std::cin >> tamanho;

    int *vetor = new int(tamanho);

    for (cont = 0; cont < tamanho; cont++)
    {
        vetor[cont] = cont;
        std::cout << vetor[cont];
    }


    return 0;
}