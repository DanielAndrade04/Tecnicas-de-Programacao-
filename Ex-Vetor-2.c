#include<stdio.h>
/*Faça um program que verifique se o usuário ganhou na mega sena.
 O  programa deve ter um vetor estático com os valores sorteados, caso o usuário acerte:
 - 6 números, imprima: Ganhou tudo
 - 5 números, imrpima: Ganhou quina
 - 4 números, imrpima: Ganhou quadra
 - 3 números, imprima: Quase
 - Caso contrário, imprima: Não foi hoje.*/

int main(void){

int numescolhidos[6], y,x,z,w,t,i,q;
int sorteados[6];
y=7;
x=25;
z=33;
w=42;
t=51;
q=54;

printf("Escolha 6 numeros entre 1 a 60\n");

for(i=0; i!=6; i++){
    printf("\nDigite o numero %d de 6: \n", i+1);
    scanf("%d", &numescolhidos[i]);
}

sorteados[6] = y,x,z,w,t,q;

printf("\nVoce acertou: %d numeros\n", sorteados[6]);

if(sorteados == 6){
    printf("Ganhou Tudo\n");
}
else if(sorteados == 5){
    printf("Ganhou Quina\n");
}
else if(sorteados == 4){
    printf("Ganhou Quadra\n");
}
else if(sorteados == 3){
    printf("Ganhou Quase\n");
}
else
    printf("Ganhou Nao foi hoje\n");
}

