#include<stdio.h>
/* 9 - Faça um programa qu receba um numero e mostre os proximos dez numeros pares depois destes

Exs: Valor de entrada: 2
                Saida: 4, 6, 8, 10, 14, 16, 18, 20, 22*/

int main (){

int x, y;

printf("Digite um numero: ");

    y=0;
    for(scanf("%i",&x); y < 10; x++){
        if(x % 2 == 0)
        {
            printf("%d ",x);
            y++;
        }
    }

return 0;
}
