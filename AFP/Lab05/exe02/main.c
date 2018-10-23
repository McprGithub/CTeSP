#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,  n1=0;
    printf("Introduza dois jumeros!\n");
    scanf("%d%d",&n,&n1);
    if(n>n1){
        printf("%d é maior que %d",n,n1);
    }else if(n<n1){
    printf("%d é menor que %d",n,n1);
    }else{
    printf("%d é igual a %d",n,n1);
    }
    return 0;
}
