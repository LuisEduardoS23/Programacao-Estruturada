#include <stdio.h>

int n;

void quadrado (){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
        
    }
    

}

void menu (){
    do {
    printf("CRIADOR DE QUADRADOS\n\n");
    printf("Digite o valor dos lados do quadrado (DIGITE 0 PARA ENCERRAR):   \n");
    scanf("%d", &n );

    quadrado();


    }
    while (n);

}


int main (){
    menu();
    return 0;

}