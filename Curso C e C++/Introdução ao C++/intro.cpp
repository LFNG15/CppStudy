#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    double b;
    float c;
    char d;
    bool e;

    a = 10;
    b = 2.8;
    c = 3.5;
    d = 'w';
    e = true;

    printf("Valor : %d \n", a);
    printf("Valor : %.2f \n", b);
    printf("Valor : %.2f \n", c);
    printf("Valor : %c \n", d);
    printf("Valor : %d \n", e);

    cout << "Hello, world";
    cout << "Valor :" << a;

    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%c", &d);
    scanf("%d", &e);

    cin >> "Valor : " >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    return 0;
}