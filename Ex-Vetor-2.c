#include<stdio.h>
/*Faça um program que verifique se o usuário ganhou na mega sena.
 O  programa deve ter um vetor estático com os valores sorteados, caso o usuário acerte:
 - 6 números, imprima: Ganhou tudo
 - 5 números, imrpima: Ganhou quina
 - 4 números, imrpima: Ganhou quadra
 - 3 números, imprima: Quase
 - Caso contrário, imprima: Não foi hoje.*/

int main(void){
int i,x;
int numescolhidos[6];
int num[6];
num[0]=7;
num[1]=25;
num[2]=33;
num[3]=42;
num[4]=51;
num[5]=58;

printf("Escolha 6 numeros entre 1 a 60\n");

for(i=0; i!=6; i++){
    printf("\n%d- numero de 6: ", i+1);
    scanf("%d",&numescolhidos[i]);
}
for(i=0; i!=6; i++){
    if(numescolhidos[i] == num[i])
        x++;
}

printf("\nVoce acertou: %d numeros\n", x);

if(x == 6){
    printf("Ganhou Tudo\n");
}
else if(x == 5){
    printf("Ganhou Quina\n");
}
else if(x == 4){
    printf("Ganhou Quadra\n");
}
else if(x == 3){
    printf("Ganhou Quase\n");
}
else
    printf("Nao foi hoje\n");

return 0;
}

