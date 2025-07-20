#include <stdio.h>

int main (){

    int fatorial;
    printf("Qual numero deseja descobrir o fatorial?  ");
    scanf("%d", &fatorial);

    int total = 1;

    for (int i = fatorial; i > 0; i--)
    {
        total = total * i;
    }
    printf("%d", total);
    
    
    return 0;
}