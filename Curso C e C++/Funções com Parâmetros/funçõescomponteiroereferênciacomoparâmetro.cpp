#include <iostream>
using namespace std;

void limpaTela(){
    system("CLS");
}

int somamaisDez(int numero){
    return numero + 10;
}

int somamaisVinte(int numero){
    return numero + 20;
}

void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){
    int a;
    cout << "Digite o primeiro valor";
    cin >> a;
    cout << a << " ";

    aumentaDez(&a);
    cout << &a << " ";

    int b;
    cout << "Digite o segundo valor";
    cin >> b;
    cout << b << " ";

    aumentaDez(&b);
    cout << &b << " ";

    cout << "O primeiro valor em seguida vai ser somado a 10 e o segundo valor vai ser somado a 20";

    limpaTela();

    a = somamaisDez(a);
    cout << "O primeiro valor somado a 10 eh : " << a << " ";

    b = somamaisVinte(b);
    cout << "O segundo valor somado a 20 eh :" << b << " ";

    return 0;
}