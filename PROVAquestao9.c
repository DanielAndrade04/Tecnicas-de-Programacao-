#include<stdio.h>
int main(){

int vetor[10], i, maior, menor, x,y,z, somae;//Um conjunto de 5 inteiros.
float media, soma=0;
int funcao;
maior = 0;
menor = vetor[0];

for(i=0;i<10;i++){
    scanf("%d",&vetor[i]);
}
printf("Digite a funcao\n");
scanf("%d", &funcao);

switch (funcao){
case 1:
    for(i=0;i<10;i++)
    printf("%d", vetor[i]);
    break;

case 2:
    for(i=0;i<10;i++){
    if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("\n Maior: %d\n", maior);
    break;

case 3:
    for(i=0;i<10;i++){
    if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("\n Menor: %d\n", menor);
    break;

case 4:
    for(i=0;i<10;i++){
    soma += vetor[i];
    printf ( "\nSoma total: %.2f\n", soma );

    media = soma / 10;}
    printf ( "\nMedia : %.2f\n", media );
    break;

case 5:
    printf("Digite as posiçoes do vetor que deseja somar \n");
    scanf("%d, %d", &x, &y);
    somae = x + y;
    printf("%d", somae);
    break;

case 6:
    printf("\n Numero a procurar no vetor: ");
    scanf("%d", &z);
    for(i=0;i<10;i++)
        scanf("%d", &vetor[i]);
    i=0;
    while(vetor[i]!=z)
        i++;
    printf("\n Encontrado na posicao %d", i);
break;

default: break;

}

}

