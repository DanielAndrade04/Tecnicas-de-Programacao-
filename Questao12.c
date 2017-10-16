#include<stdio.h>
/*12 - Faça um programa que leia 10 inteiros positivos, ignorando os negativos positivos, e imprima sua media*/

int main(){
int x,y,z;
    y=0;
    z=0;
    while(y != 10){
    printf("Digite o numero %d de 10: ", y+1);
      scanf("%i",&x);
      if(x >0){
      z = z+x;
      y++;}
      if(y == 10){
            z = z /10;
            printf("\n\n\nA media dos 10 valores  = %i",z);
      }
      }


return 0;
}
