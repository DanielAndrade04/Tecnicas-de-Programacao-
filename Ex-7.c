#include<stdio.h>

int main(){
    float n1, n2, n3, soma;

    printf("Informe a primeira nota:");
    scanf("%f", &n1);

    printf("Informe a segunda nota:");
    scanf("%f", &n2);

    printf("Informe a terceita nota:");
    scanf("%f", &n3);

    soma=n1+n2+n3;
    if(soma<60){
        printf("REPROVADO");
    }
    else
        printf("APROVADO");
    }

