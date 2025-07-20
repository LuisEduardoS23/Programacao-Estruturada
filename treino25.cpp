#include <stdio.h>

int main (){
    
    int numero;

    printf("Qual o numero algarismos da sequencia de fibonacci:  ");
    scanf("%d", &numero);

    int penultimo_num = 0;
    int ultimo_num = 1;
    int numero_atual;

    printf("%d\n%d\n", penultimo_num, ultimo_num);
    for (int i = 2; i < numero; i++)
    {
        numero_atual = ultimo_num + penultimo_num;
        penultimo_num = ultimo_num;
        ultimo_num = numero_atual;

        printf("%d\n",numero_atual );
    }
    
    
    
    return 0;
}