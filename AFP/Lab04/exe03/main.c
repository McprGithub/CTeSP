#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    int ano = 2017;
    float fator = 1.345000;
    printf("A variavel letra tem o valor: %c\n",letra);
    letra = 'b';
    printf("A variavel letra tem agora o valor: %c\n",letra);
    printf("A variavel ano tem o valor: %d\n",ano);
    printf("A variavel fator tem um valor inicial : %f\n",fator);
    fator =  1.200000;
    printf("A variavel fator tem agora o valor : %f\n",fator);
    return 0;
}
