#include <stdio.h>
#include <stdlib.h>
 

void main(){
 

    int a = 18;
 

    if(a > 5 && a > 15){
        printf("\n A variavel 'a' esta entre 5 e 15 ");
    }
 

    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 ou 15 ");
    }
 

    if( (a > 5 && a < 15) || a == 20 ){
        printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20 ");
    }
 

    system("pause");
 
}