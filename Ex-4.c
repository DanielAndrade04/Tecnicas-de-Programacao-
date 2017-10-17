#include<stdio.h>
#include<conio.h>
int main ()
{
float n1;
printf("Informe o primeiro numero: ");
scanf("%f",&n1);
if (n1 > 0){
printf("Positivo");
}
else if (n1 < 0){
printf("Negativo");
}
else if (n1 == 0){
printf("Nulo");
}
getch();
}
