#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    printf("Escrwea o numero\n");
    scanf("%d",&n);
    if(n > 0){
        printf("%d � maior que 0",n);
    }else if(n<0){
    printf("%d � menor que 0",n);
    }else if(n == 0){
    printf("%d foi introduzido",n);
    }
    return 0;
}
