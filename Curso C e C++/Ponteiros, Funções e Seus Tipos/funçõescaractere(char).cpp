#include <iostream>
using namespace std;

char retornaLetra() {
    return 'x';
}

char retorna3Letras() {
    return 'TES';
}

void retornamaisdoque3Letras() {
    cout << "Testei colocando mais 3 letras, porém a função Char não permitiu. No entando fica por isso mesmo" << " ";
}

void exemplo() {
    cout << "A função Char retorna o string mas não retorna os números";
}

char number() {
    return 120;
}

int main() {

    char letra;
    letra = retornaLetra();

    char letra2;
    letra2 = retorna3Letras();

    cout << letra << " ";
    cout << letra2 << " ";
    retornamaisdoque3Letras();
    exemplo();

    return 0;
}