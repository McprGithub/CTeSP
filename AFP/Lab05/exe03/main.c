#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Introduzas caracter\n");
    scanf("%c",&c);
    if(c=='9' || c=='8' || c=='7' || c=='6' || c=='5' || c=='4' || c=='3' || c=='2' || c=='1' || c=='0'){
    printf("%c � numerico",c);
    }else if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
    printf("%c � vogal",c);
    }else{
    printf("Nao � nada");
    }
    return 0;
}
