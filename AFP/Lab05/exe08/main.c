#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,taxa;char t;
    printf("Numero\n");
    scanf("%f",&n);
    printf("Taxa\n");
    scanf(" %c",&t);
    t=toupper(t);
    if (t!='N' && t!='I'){
        printf("Erro");
    }else if(t=='N'){
    taxa=n*1.23;
    printf("%-25s %-5s %f\n","Preço inicial do produto",":",n);
    printf("%-25s %-5s 23%%\n","Taxa a aplicar",":");
    printf("%-25s %-5s %f\n","Preço final do produto",":",taxa);
    }else if(t=='I'){
    taxa=n*1.09;
    printf("%-25s %-5s %f\n","Preço inicial do produto ",":",n);
    printf("%-25s %-5s 9%%\n","Taxa a aplicar",":");
    printf("%-25s %-5s %f\n","Preço final do produto ",":",taxa);
    }

    return 0;
}
