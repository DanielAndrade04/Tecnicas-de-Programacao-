#include <stdio.h>
#include <string.h>

int main(){
char texto[100], inverso[100];
int i,f=0;

printf("Digite uma palavra: ");
gets(texto);

printf("O tamanho e: %d\n", strlen(texto));

for (i=strlen(texto)-1; i>=0; i--){
    inverso[f] = texto[i];
    f++;
}
inverso[f] = 0;

printf("Inverso: %s\n", inverso);

if(strcmp(texto,inverso)==0){
    printf("E palindromo");
}
else{
    printf("Nao e palindromo");
}

return 0;
}
