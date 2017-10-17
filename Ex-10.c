#include<stdio.h>
/*10 - Faça um programa que peça ao usuario para digitar 10 valores e someos*/

int main(){

int x, y, z, soma;
printf("Digite 10 valores inteiros:\n");

    y=0;
    z=0;
    while(y != 10){
    printf("Digite o numero %d de 10: ", y+1);
      scanf("%i",&x);
      z = z+x;
      y++;
      if(y == 10)printf("\n\n\nSoma de todos os valores = %i",z);
      }

return 0;
}
