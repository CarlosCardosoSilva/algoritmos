#include <stdio.h>
/*
76. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se
o número lido é ou não um palíndromo.
*/

int main(){

    int n;
    printf("Digite um  numero entre 1000 e 9999: ");
    scanf("%d",&n);
    int milhar = n /1000;//2
    int resto = (n % 1000);//222
    int centena = resto / 100;//2
    int resto2 = resto % 100;//22
    int dezena = resto2/10;//2
    int unidade = (resto2 % 10) * 1;//2

    ///printf("\nMilhar = %d ",milhar);
   // printf("Centena = %d ",centena);
    //printf("Dezena %d = ",dezena);
    //printf("Unidade %d = ",unidade);

    //printf("Resto %d = ",resto);
    //printf("Resto2 %d = ",resto2);
    
    if(n > 1000 || n <9999){
        if(unidade == milhar && dezena == centena){
            printf("O número digitado é um palindrome!");
        }else{
            printf("Não é um palindrome!");
        }

    }else{
        printf("Por favor digite um numero entre 1000 e 9999");
    }
    
    return 0;
}