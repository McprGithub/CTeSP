#include <stdio.h>

int main(){
    int num1, num2;

    printf("Introduza dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("A soma de %d com %d é: %d\n", num1, num2, num1+num2);
    printf("A subtracao de %d com %d é: %d\n", num1, num2,num1-num2);
    printf("O produto de %d com %d é: %d\n", num1, num2, num1*num2);
    printf("A divisao de %d com %d é: %d\n", num1, num2, num1/num2);

    return 0;
}
