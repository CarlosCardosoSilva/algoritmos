#include <stdio.h>
#include <stdlib.h>
/*
73. Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um
mês do ano e verifique o trimestre a que este mês pertence
*/
/* 
   janeiro1, Fevereio2, abril3, março4,//// maio5, junho6/ julho7, agosto8, ////setembro9,//// outubro10, novembro11, dezembro12
*/
int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d",&numero);
    

     if (numero == 1 || numero == 2 || numero == 3 || numero == 4){
         printf("\nO més digitado corresponde ao primeiro trimestre!");

     }else if(numero == 5 ||  numero == 6 || numero == 7 || numero == 8){

        printf("\nO mês digitado é referente ao segundo trimestre!");
     
    }else{
        printf("O mês digitado corresponde ao terceiro trimestre!");
    }
    
    
    return 0;
}