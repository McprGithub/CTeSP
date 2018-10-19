#include <stdio.h>

int main(){
    printf("%-5s %-5s %-20s %-5s %-5s\n","\\n","=","<ENTER>","-","CR");
    printf("%-5s %-5s %-20s %-5s %-5s\n","\\\\","=","<BACKSLASH>","-","\\");
    printf("%-5s %-5s %-20s %-5s %-5s\n","\\t","=","<TAB>","-","VT");
    printf("%-5s %-5s %-20s %-5s %-5s\n","%%","=","<PERCENTAGE SIGN>","-","%");
    printf("%-5s %-5s %-20s %-5s %-5s\n","\\\"\\\"","=","<QUOTATION MARKS>","-","\"\"");
}
