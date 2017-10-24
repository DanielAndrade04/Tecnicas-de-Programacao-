#include<stdio.h>
/*Faça um programa que receba um numero n, que consiste na quantidade de notas que serão digitadas.Ao final, mostre todas as notas e a media das mesmas.
Caso a media seja maior que 60, imprima também "Aprovado" caso contrario imprima "Reprovado".*/

int main (void){
int i, quant, c;
float soma, media;
soma=0;

printf("Digite a quantidade de notas: \n");
scanf("%d", &quant);

float notas[quant];

for(i=0; i!=quant; i++){

printf("\nDigite a nota %d de %d\n", i+1, quant);
scanf("%f", &notas[i]);
soma = soma + notas[i];
}

media = (soma/i);

printf("\nMedia das notas = %.2f\n", media);

    if(media >= 60){
        printf("\nAprovado\n");
    }
    else{
        printf("\nReprovado\n");
    }
    printf("\nNotas digitadas: ");

for(i=0;i!=quant; i++){
    printf("%.f,", notas[i]);
}
return 0;
}
