int main(){
    char a, b, c;

    printf("Introduza dois caracteres: \n");
    scanf("%c %c", &a, &b);

    printf("\t*** ANTES DA TROCA ***\n");
    printf("\tValor inicial da variavel 'a': %c\n",  a);
    printf("\tValor inicial da variavel:'b' %c\n", b);

    c = a;
    a = b;
    b = c;

    printf("\tValor final da variavel 'a': %c\n", a);
    printf("\tValor final da variavel: 'b' %c\n", b);

    return 0;
}