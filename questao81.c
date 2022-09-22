#include <stdio.h>
/*
   81. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
   números pares positivos.
*/

int main(){
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d",&n);
    int i;
    int par = 2;
    if(n<=0){
        printf("Por favro digite um numero inteiro positivo maior que 0: ");
        scanf("%d",&n);
        printf("%d\n",par);
        for(i=0; i<n-1; i++){
        par = par+2;
        printf("%d\n",par);

        }

    }else{
        printf("%d\n",par);
        for(i=0; i<n-1; i++){
        par = par+2;
        printf("%d\n",par);

        }
    }
    
    
    return 0;
}