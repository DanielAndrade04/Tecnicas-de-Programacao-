#include<stdio.h>
//faça um programa que leia 3 numeros e encontre qual deles é o maior
int main(){

int A, B, C;

scanf("%d %d %d", &A, &B, &C);

if (A > B && A > C){
    printf("O maior e %d", A);
}
else if (B > C){
    printf("O maior e %d", B);
}
else if (C > A ){
    printf("O maior e %d", C);
}
else {
    printf("Os numeros sao iguais");
}
return 0;
}
