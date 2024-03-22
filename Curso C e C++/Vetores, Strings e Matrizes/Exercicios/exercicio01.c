#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main() {
 
    setlocale(LC_ALL,"");
 
    int vetorA[3], aux, media;
 
    printf("Digite um valor:");
    scanf("%d", &vetorA[0]);
    printf("Digite um valor:");
    scanf("%d", &vetorA[1]);
    printf("Digite um valor:");
    scanf("%d", &vetorA[2]);
    printf("\nvetorA[0] -> %d ", vetorA[0]);
    printf("\nvetorA[1] -> %d ", vetorA[1]);
    printf("\nvetorA[2] -> %d ", vetorA[2]);
    media = (vetorA[0] + vetorA[1] + vetorA[2]) / 3;
    printf("\n Média: %d", media);
 
    int i;
    for(i = 0; i < 3; i++){
        printf("\nDigite um valor para a posição vetor[%d]", i);
        scanf("%d",&vetorA[i]);
        media = media + vetorA[i];
    }
    printf("\n Média: %d", media/3);
}