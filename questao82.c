#include <stdio.h>
/*
82. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
números ímpares positivos.
*/
int main(){
    //2-1 = 1 4-1 = 3 6-1 = 5
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d",&n);
    int i;
    int impar = 2;
    for(i=0; i<n; i++){
        impar = impar -1;
        printf("%d\n",impar);
        impar = impar + 3;

       
    }
    return 0;
}