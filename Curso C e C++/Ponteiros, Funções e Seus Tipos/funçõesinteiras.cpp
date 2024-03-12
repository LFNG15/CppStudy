#include <iostream>
#define WASD 10;
#define RAFCE 100;
using namespace std;

int retornaDez()
{
    return WASD;
}

int retornaCem() {
    return RAFCE;
}

float retornaQuebrado(){
    float numero = 5.5;
    return numero;
}

void exemplo(){
    cout << "Isso aqui é função Void, sem retorno e outros a cima lá são funções inteiras que tem seu retorno";
}

int main()
{
    int a;
    int b;
    float c;

    a = retornaDez();
    b = retornaCem();
    c = retornaQuebrado();

    cout << a << " ";
    cout << b << " ";
    cout << c << " ";

    exemplo();

    return 0;
}