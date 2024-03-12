#include <iostream>
using namespace std;

void mostraSucessor(int numero) {
    cout << "\nO sucessor de " << numero << " eh " << numero + 1;
}

void mostraAntecessor(int numero) {
    cout << "\nO antecessor de " << numero << " eh " << numero - 1;
}

int main() {
    int a;

    cout << "Digite um valor:" ;
    cin >> a;

    mostraSucessor(a);
    mostraAntecessor(a);

    return 0;
}