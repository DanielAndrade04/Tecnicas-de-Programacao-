#include<stdio.h>

int main(){
int n1,n2;

printf("Digite um numero: ");
scanf("%d", &n1);

n2 = n1;

for(; n2>0; n2--){
    if(n1 % n2 == 0 && n1 != n2 || n1 == 1){
        printf("Nao e primo\n");
        break;
    }
    else if(n2 == 2){
        printf("E primo\n");
        break;
    }
}




return 0;
}
