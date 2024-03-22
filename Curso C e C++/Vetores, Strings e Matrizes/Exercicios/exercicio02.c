#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main() {
 
    setlocale(LC_ALL,"");
 
    int minhaMatriz[2][2], aux1,aux2, i , j;
 
    printf("Digite um valor para [0][0]");
    scanf("%d", &minhaMatriz[0][0]);
    printf("Digite um valor para [0][1]");
    scanf("%d", &minhaMatriz[0][1]);
    printf("Digite um valor para [1][0]");
    scanf("%d", &minhaMatriz[1][0]);
    printf("Digite um valor para [1][1]");
    scanf("%d", &minhaMatriz[1][1]);
 
    aux1 = minhaMatriz[0][0];
    aux2 = minhaMatriz[0][1];
 
    minhaMatriz[0][0] = minhaMatriz[1][0];
    minhaMatriz[0][1] = minhaMatriz[1][1];
    minhaMatriz[1][0] = aux1;
    minhaMatriz[1][1] = aux2;
 
    printf("\n%d %d",minhaMatriz[0][0],minhaMatriz[0][1]);
    printf("\n%d %d",minhaMatriz[1][0],minhaMatriz[1][1]);
}