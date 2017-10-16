#include<stdio.h>
/*Faça um program que verifique se o usuário ganhou na mega sena.
 O  programa deve ter um vetor estático com os valores sorteados, caso o usuário acerte:
 - 6 números, imprima: Ganhou tudo
 - 5 números, imrpima: Ganhou quina
 - 4 números, imrpima: Ganhou quadra
 - 3 números, imprima: Quase
 - Caso contrário, imprima: Não foi hoje.*/

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
