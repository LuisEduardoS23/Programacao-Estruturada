#include <stdio.h>
#include <locale.h>


//SEQUENCIA DE FIBONACCI//

int numero;

int main (){
    setlocale(LC_ALL, "portuguese");

    printf("Quantos números da sequência você quer imprimir?   ");
    scanf("%d", &numero);

    int sequencia [numero + 1];

    for (int i = 0; i < numero; i++){

        if (i == 0 || i == 1){
            sequencia [i] = 1;
        }
        else if (i > 1){

            int penultimo = sequencia[i - 1];
            int antepenultimo = sequencia [i - 2];

            sequencia [i] = penultimo + antepenultimo;
        }
        printf("%d  ", sequencia[i]);
    }
    

    return 0;
    }