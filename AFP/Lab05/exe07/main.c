#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Introduza o caracter\n");
    scanf("%c",&c);
    c=toupper(c);

    if(c!='S' && c!='C' && c!='D' && c!='V'){
        printf("Car�cter introduzido = \'%c\' ERRO-Car�cter inv�lido!",c);
    }else if(c=='C'){
    printf("Car�cter introduzido = \'%c\': CASADO",c);
    }else if(c=='S'){
    printf("Car�cter introduzido = \'%c\': Solteiro",c);
    }else if(c=='D'){
    printf("Car�cter introduzido = \'%c\': Divorciado",c);
    }else if(c=='V'){
    printf("Car�cter introduzido = \'%c\': Viuvo",c);
    }
}
