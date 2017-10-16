#include<stdio.h>
/*11 - Faça um programa que leia 10 inteiros e imprima sua media*/

int main(){

int x,y,z;
    y=0;
    z=0;
    while(y != 10){
    printf("Digite o numero %d de 10: ", y+1);
      scanf("%i",&x);
      z = z+x;
      y++;
      if(y == 10){
            z = z /10;
            printf("\n\n\nA media dos 10 valores  = %i",z);
      }
      }

return 0;
}
