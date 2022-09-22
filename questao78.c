#include <stdio.h>
/*
78. Escreva um programa que leia cinco números inteiros e determine o segundo maior
número digitado pelo usuário e a ordem em que o mesmo foi digitado.
*/
int main(){
    int n1,n2,n3,n4,n5;
    int maior,menor,segundoMaior;
    int pos;
    printf("Digite primeiro número: ");
    scanf("%d",&n1);
    printf("Digite segundo número: ");
    scanf("%d",&n2);
    printf("Digite terceiro número: ");
    scanf("%d",&n3);
    printf("Digite quarto número: ");
    scanf("%d",&n4);
    printf("Digite quinto número: ");
    scanf("%d",&n5);
    
    maior = n1;// n1 = 2 // n2 = 3 // n3 = 4  // n4 = 7 // n5 = 11

    if(n2 > maior ){
        maior = n2;
    }
    if(n3 > maior){
        maior = n3;
    }

    if(n4 > maior){
        maior = n4;
    }
    if(n5 >  maior){
        maior = n5;
    }
    printf("%d\n",maior);
    // 2 3 4 7 11

    return 0;
}