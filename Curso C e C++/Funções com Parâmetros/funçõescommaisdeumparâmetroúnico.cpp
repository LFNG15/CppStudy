#include <iostream>
using namespace std;

int retornaSoma(int primeiroValor, int segundoValor)
{
    return primeiroValor + segundoValor;
}

int retornaSubstracao(int primeiroValor, int segundoValor){
    return primeiroValor - segundoValor;
}

int main()
{
    int a;
    int b;

    cout << "Digite o primeiro valor"; 
    cin >> a;
    cout << "Digite o segundo valor";
    cin >> b;

    retornaSoma(a, b);

    cout << "\n A soma entre " << a << " e " << b << " eh " << retornaSoma(a, b);

    retornaSubstracao(a, b);

    cout << "\n A substração entre " << a << " e " << b << " eh " << retornaSubstracao(a, b);

    return 0;
}