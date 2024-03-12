#include <iostream>
#include <stdbool.h>
using namespace std;

bool retornaBooleano () {
    return true;
}

int main()
{
    bool variavelBooleana;
    variavelBooleana = retornaBooleano();

    if(variavelBooleana){
        cout << "verdadeiro" << " ";
    }else{
        cout << "falso" << " ";
    }

    cout << variavelBooleana;

    return 0;
}