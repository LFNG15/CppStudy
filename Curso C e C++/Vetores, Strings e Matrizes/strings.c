#include <stdio.h>
#include <stdlib.h>

void main(){
 
    char palavra[10];
 
    printf("Digite uma palavra");
 
    setbuf(stdin, 0);
 
    fgets(palavra, 255, stdin);
 
    palavra[strlen(palavra)-1] = '\0';
 
    printf("%s", palavra);
 
    system("pause");
}