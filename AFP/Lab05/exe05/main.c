#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    float raio = 0, pi = 3.1415927, res=0;
    char c;
    printf("Introduza o raio\n");
    scanf("%f",&raio);
    printf("Introduza o caracter\n");
    scanf(" %c",&c);
    c=toupper(c);

    if(c!='A' && c!='P' && c!='V'){
        printf("Nao introduzio uma letra valida");
    }else if(c=='A'){
    res = (raio*raio)*pi;
    printf("+++ +++ C�LCULO DO \"Area\" - \CIRCUNFER�NCIA\ +++\n");
    printf("Valor de %-10s %-5s %f\n","PI",":",pi);
    printf("Valor de %-10s %-5s %f\n","Raio",":",raio);
    printf("Valor de %-10s %-5s %f\n","Area",":",res);
    }else if(c=='P'){
    res = (raio*2)*pi;
    printf("+++ +++ C�LCULO DO \"Perinmetro\" - \CIRCUNFER�NCIA\ +++\n");
    printf("Valor de %-10s %-5s %f\n","PI",":",pi);
    printf("Valor de %-10s %-5s %f\n","Raio",":",raio);
    printf("Valor de %-10s %-5s %f\n","Perimetro",":",res);
    }else if(c=='V'){
    res = ((raio*raio*raio)*pi*4)/3;
    printf("+++ +++ C�LCULO DO \"Volume\" - \CIRCUNFER�NCIA\ +++\n");
    printf("Valor de %-10s %-5s %f\n","PI",":",pi);
    printf("Valor de %-10s %-5s %f\n","Raio",":",raio);
    printf("Valor de %-10s %-5s %f\n","Volume",":",res);
    }
    return 0;
}
