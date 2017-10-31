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

/*#include<stdio.h>

int
fatorial (int x)
{
  if (x < 1)
    return 1;
  else
    return (x * fatorial (x - 1));
}

int main (void){

int n1,resultado;

printf("Digite um numero: ");

scanf("%d",&n1);

resultado = fatorial(n1);

printf("Fatorial: %d\n",resultado);

return 0;
}
*/

