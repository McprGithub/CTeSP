#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Introduza o caracter\n");
    scanf("%c",&c);
    c=toupper(c);

    if(c!='S' && c!='C' && c!='D' && c!='V'){
        printf("Carácter introduzido = \'%c\' ERRO-Carácter inválido!",c);
    }else if(c=='C'){
    printf("Carácter introduzido = \'%c\': CASADO",c);
    }else if(c=='S'){
    printf("Carácter introduzido = \'%c\': Solteiro",c);
    }else if(c=='D'){
    printf("Carácter introduzido = \'%c\': Divorciado",c);
    }else if(c=='V'){
    printf("Carácter introduzido = \'%c\': Viuvo",c);
    }
}
