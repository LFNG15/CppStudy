#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
 

    setlocale(LC_ALL, "");
 

    int ladoA, ladoB, ladoC;
    printf("Digite os 3 valores:");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
 

    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("\nO triângulo é equilátero");
    }else{
  
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("\nO triângulo é isósceles!");
        }else{
            printf("\nO triângulo é escaleno!");
        }
    }
 
}
