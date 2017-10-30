#include<stdio.h>
/*Faça um programa que calcule o fatorial de n, para maior que zero;*/
int main(void){
int n,i,f=1;

scanf("%d", &n);

for(i=1; i<=n; i++)
    f=f*i;

printf("%d",f);
return 0;
}



