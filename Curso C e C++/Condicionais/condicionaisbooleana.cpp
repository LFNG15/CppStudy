#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
void main(){
 

   bool a = true, b = false;
 
 
   if(a){
        printf("\n A eh verdadeiro");
   }
 

   if(b){
     printf("\nB eh verdadeiro");
   }else{
     printf("\nB eh falso");
   }
 

   if(!b){
     printf("\nB eh falso");
   }
 

    system("pause");
 
}