#include<stdio.h>

int main(){
    float n1, n2, soma;

    printf("Digite a distancia percorrida:");
    scanf("%f", &n1);

    printf("Digite o tempo gasto:");
    scanf("%f", &n2);

    soma=n1/n2;

    printf("A velocidade media percorrida foi %f", soma);
}
