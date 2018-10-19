#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t%-40s:%d\n","O Tamanho em bytes de um \"char\"",   sizeof(char));
    printf("\t%-40s:%d\n","O Tamanho em bytes de um  \"short\"", sizeof(short));
    printf("\t%-40s:%d\n","O Tamanho em bytes de um  \"int\"",   sizeof(int));
    printf("\t%-40s:%d\n","O Tamanho em bytes de um  \"float\"", sizeof(float));
    printf("\t%-40s:%d\n","O Tamanho em bytes de um  \"double\"",sizeof(double));
    return 0;
}
