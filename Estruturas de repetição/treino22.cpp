#include <stdio.h>

int main (){

    int numero;

    printf("Digite o numero de linhas :  ");
    scanf ("%d", &numero);
    
    for (int linha = 1; linha <= numero; linha++){

        for (int coluna = 1; coluna <= linha; coluna++){
            printf ("*");
        }
        printf("\n");
    }
    

    return 0;
}