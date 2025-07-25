#include <stdio.h>

int main (){

    int numero;

    printf("Digite o numero maximo:  ");
    scanf("%d", &numero);

    for (int linha = 1; linha <= numero; linha++){

        for (int coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d", coluna);
        }
        printf("\n");
    }
    
    
    
    return 0;
}