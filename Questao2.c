#include<stdio.h>

 void main (){

  int num, var;

printf("Informe um numero:");

scanf("%d", &num);

var=num%2;
if(var == 0){
        printf("o proximo numero par e:%i",num+2);

 }
 else {
        printf("o proximo numero par e:%i", num+1);
 }
 }



