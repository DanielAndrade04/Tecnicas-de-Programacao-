#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
    float peso, altura, IMC;

    printf("Digite o peso:");
    scanf("%f", &peso);

    printf("Digite a altura:");
    scanf("%f", &altura);

    IMC=peso/(altura*altura);

    printf("O calculo do seu IMC e %f:", IMC);

getch();
}
