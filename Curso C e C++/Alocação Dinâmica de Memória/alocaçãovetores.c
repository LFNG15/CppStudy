#include <stdio.h>
#include <stdlib.h>
 
int* alocaVetor (int tam ){
    int *v;

    v = (int *) malloc ( tam * sizeof (int) ) ;
 
    return v;
}
 
int main(){
    int *vetor , tam ,i;
 
    printf("Digite um tamanho");
    scanf ( "%d", &tam ) ;
 
   
    vetor = alocaVetor(tam) ;
 
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
 
    for(i=0;i<tam;i++){
        printf("%d", vetor[i]);
    }
 
    free ( vetor ) ;
 
    return 0;
}