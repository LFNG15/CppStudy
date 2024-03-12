#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

void desenhaBorda()
{
    printf("|---------------------------------| \n");
}

void Recado() {
    cout << "Oi";
}

void Testando(){
    cout << "Isso é exenplo de função sem retorno ou void";
}

int main()
{
    desenhaBorda();
    Recado();
    Testando();
    desenhaBorda();

    return 0;
}