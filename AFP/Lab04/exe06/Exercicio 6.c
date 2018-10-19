#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    //char[] espaco;
    printf("\t\t\t\TIPO: \" char \"\n");
    printf("\t\t\t%-25s:%d\n","Tamanho em bytes", sizeof(char));
    printf("\t\t\t%-25s:%d\n","Valor Maximo", SCHAR_MIN);
    printf("\t\t\t%-25s:%d\n\n","Valor minimo", SCHAR_MAX);

    printf("\t\t\t\TIPO: \" short \"\n");
    printf("\t\t\t%-25s:%d\n","Tamanho em bytes", sizeof(short));
    printf("\t\t\t%-25s:%d\n","Valor Maximo", SHRT_MAX);
    printf("\t\t\t%-25s:%d\n\n","Valor minimo", SHRT_MIN);

    printf("\t\t\t\TIPO: \" int \"\n");
    printf("\t\t\t%-25s:%d\n","Tamanho em bytes", sizeof(int));
    printf("\t\t\t%-25s:%d\n","Valor Maximo", INT_MAX);
    printf("\t\t\t%-25s:%d\n\n","Valor minimo", INT_MIN);

    printf("\t\t\t\TIPO: \" float \"\n");
    printf("\t\t\t%-25s:%d\n","Tamanho em bytes", sizeof(float));
    printf("\t\t\t%-25s:%d\n","Valor Maximo", FLT_MAX);
    printf("\t\t\t%-25s:%d\n\n","Valor minimo", FLT_MIN);

    printf("\t\t\t\TIPO: \" double \"\n");
    printf("\t\t\t%-25s:%d\n","Tamanho em bytes", sizeof(double));
    printf("\t\t\t%-25s:%d\n","Valor Maximo", DBL_MAX);
    printf("\t\t\t%-25s:%d\n\n","Valor minimo", DBL_MIN);
    return 0;
}
