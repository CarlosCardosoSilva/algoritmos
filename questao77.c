#include <stdio.h>
/*
77. Escreva um programa que leia quatro números reais e verifique se eles formam, na
ordem em que foram digitados, uma progressão aritmética, uma progressão
geométrica, os dois tipos de progressão ou nenhum tipo de progressão.
*/

int main(){
    float n1,n2,n3,n4;
    printf("Digite o primeiro número: ");
    scanf("%f",&n1);
    printf("Digite o segundo número: ");
    scanf("%f",&n2);
    printf("Digite o terceiro número: ");
    scanf("%f",&n3);
    printf("Digite o quarto número: ");
    scanf("%f",&n4);
    float R1 = n2-n1; 
    float R2 = n4 - n3;
    float R3 = n2/n1;
    float R4 = n4/n3;
    
    if( R1 == R2 ){
        printf("\nA sequência de número foram uma progressão aritimética(PA)");
        
    }
    else if(R3 == R4){
        printf("\nA sequência formam uma progressão geometrica(PG)");
    }
    else if(R1 == R2 && R3 == R4){
        printf("\nA sequência digitada formam uma (PA) e uma (PG)");
    }else{
        printf("A sequência não forma uma (PA) e nem uma (PG)");
    }

    return 0;
}