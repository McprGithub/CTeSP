#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0;
    printf("Introduza o numero\n");
    scanf("%d",&n1);
    if((n1>=0) && (n1%2)==0){
        printf("%d é par",n1);
    }else if((n1>=0) && (n1%2)==0){
    printf("%d é impar",n1);
    }
    return 0;
}
