#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=0, desc=0,liq=0,brut=0;
    printf("Introduxa salario\n");
    scanf("%f",&n);
    if(n<800){
        brut=n;
        desc=n*0.02;
        n=n*0.98;
        printf("%-30s %-8s %f\n","Vencimento Bruto",":",brut);
        printf("%-30s %-8s 2%%\n","Desconto Aplicado",":");
        printf("%-30s %-8s %f\n","Vsalor dos Descontos",":",desc);
        printf("%-30s %-8s %f\n","Vencimento Liquido",":",n);
    }else if(n>=800 && n<1000){
    brut=n;
        desc=n*0.04;
        n=n*0.96;
        printf("%-30s %-8s %f\n","Vencimento Bruto",":",brut);
        printf("%-30s %-8s 4%%\n","Desconto Aplicado",":");
        printf("%-30s %-8s %f\n","Vsalor dos Descontos",":",desc);
        printf("%-30s %-8s %f\n","Vencimento Liquido",":",n);
    }else if(n>=1000 && n<1500){
    brut=n;
        desc=n*0.06;
        n=n*0.94;
        printf("%-30s %-8s %f\n","Vencimento Bruto",":",brut);
        printf("%-30s %-8s 6%%\n","Desconto Aplicado",":");
        printf("%-30s %-8s %f\n","Vsalor dos Descontos",":",desc);
        printf("%-30s %-8s %f\n","Vencimento Liquido",":",n);
    }else if(n>=1500 && n<3000){
    brut=n;
        desc=n*0.10;
        n=n*0.90;
        printf("%-30s %-8s %f\n","Vencimento Bruto",":",brut);
        printf("%-30s %-8s 10%%\n","Desconto Aplicado",":");
        printf("%-30s %-8s %f\n","Vsalor dos Descontos",":",desc);
        printf("%-30s %-8s %f\n","Vencimento Liquido",":",n);
    }else if(n>=3000 && n<5000){
    brut=n;
        desc=n*0.12;
        n=n*0.88;
        printf("%-30s %-8s %f\n","Vencimento Bruto",":",brut);
        printf("%-30s %-8s 12%%\n","Desconto Aplicado",":");
        printf("%-30s %-8s %f\n","Vsalor dos Descontos",":",desc);
        printf("%-30s %-8s %f\n","Vencimento Liquido",":",n);
    }else{
    brut=n;
        desc=n*0.18;
        n=n*0.82;
        printf("%-30s %-8s %f\n","Vencimento Bruto",":",brut);
        printf("%-30s %-8s 18%%\n","Desconto Aplicado",":");
        printf("%-30s %-8s %f\n","Vsalor dos Descontos",":",desc);
        printf("%-30s %-8s %f\n","Vencimento Liquido",":",n);
    }
    return 0;
}
