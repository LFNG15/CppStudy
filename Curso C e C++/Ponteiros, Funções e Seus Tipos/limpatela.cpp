#include <iostream>
#include <stdlib.h>
using namespace std;

void limpaTela() {
    system("CLS");
}

int main() {
    int a;

    cout << "Digite o valor para 'a': ";
    scanf("%d", &a);

    limpaTela();

    cout << "Fim do Programa!";

    return 0;
}