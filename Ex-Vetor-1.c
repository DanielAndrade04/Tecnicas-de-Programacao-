#include<stdio.h>
/*Faça um programa que receba um numero n, que consiste na quantidade de notas que serão digitadas.Ao final, mostre todas as notas e a media das mesmas.
Caso a media seja maior que 60, imprima também "Aprovado" caso contrario imprima "Reprovado".*/

int main (){
int i, b, c;
float d, media;
d=0;

printf("Digite a quantidade de notas: \n");
scanf("%d", &b);

float a[b];

for(i=0; i!=b; i++){

printf("\nDigite a nota %d de %d\n", i+1, b);
scanf("%f", &a[i]);
d = d + a[i];
}

media = (d/i);

printf("\nMedia das notas = %.2f\n", media);

    if(media >= 60){
        printf("\nAprovado\n");
    }
    else if (media <60){
        printf("\nReprovado\n");
    }
    printf("\nNotas digitadas:\n");

for(i=0;i!=b; i++){
    printf("%.f,", a[i]);
}
}
