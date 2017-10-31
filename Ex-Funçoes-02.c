/*Faça um programa que calcule a sequencia fibonacci em n;*/

#include<stdio.h>

int main(void){

int a, b, auxiliar, i, n;
a = 0;
b = 1;

printf("Digite um numero: ");

scanf("%d", &n);
printf("Serie de Fibonacci: \n");
printf("%d\n", b);

for(i = 0; i < n; i++){
    auxiliar = a + b;
    a = b;
    b = auxiliar;

    printf("%d\n", auxiliar);
  }
}



