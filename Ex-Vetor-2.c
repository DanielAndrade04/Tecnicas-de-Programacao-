#include<stdio.h>
/*Fa�a um program que verifique se o usu�rio ganhou na mega sena.
 O  programa deve ter um vetor est�tico com os valores sorteados, caso o usu�rio acerte:
 - 6 n�meros, imprima: Ganhou tudo
 - 5 n�meros, imrpima: Ganhou quina
 - 4 n�meros, imrpima: Ganhou quadra
 - 3 n�meros, imprima: Quase
 - Caso contr�rio, imprima: N�o foi hoje.*/

int main(void){

int a[6], y,x,z,w,t,i;
int num;
y=7;
x=25;
z=33;
w=42;
t=51;

printf("Escolha 6 numeros de 1 a 60\n");

for(i=0; i!=6; i++){
    printf("\nDigite o numero %d de 6: \n", i+1);
    scanf("%d", a);
}

}
