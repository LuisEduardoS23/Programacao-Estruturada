#include <stdio.h>

int potencia ( int base, int expoente){
    int total = 1;
    for (int i = 0; i < expoente; i++)
    {
        total = total * base;
    }
    
    return total;
}

int main (){

    int numero_base, numero_expoente;

    printf("Digite o número que deseja exponenciar:  \n");
    scanf("%d", &numero_base);

    printf("Digite o valor do expoente:   \n");
    scanf("%d", &numero_expoente);


    printf("%d", potencia(numero_base, numero_expoente));

    return 0;
}

