#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    int num = 0;
    printf("Introduza a letra e o numero\n");
    scanf("%c %d", &letra, &num);
    printf("\t\t\t%c - %04d", letra, num);
    return 0;
}
