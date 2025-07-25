#include <stdio.h>
#include <locale.h>

int numero;

int main (){
    setlocale (LC_ALL, "Portuguese");

    printf ("Digite um número ímpar:   ");
    scanf("%d", &numero);

    int numero_de_linhas = (numero - 1) / 2;

    int array [numero + 1];


    for (int j = 0; j < numero; j++){
        array[j] = j +1;
    }
    
    int numero_final = numero;
    int numero_comeco = 0;
    for (int i = 0; i <= numero_de_linhas; i++){

        for (int s = 0; s < numero_de_linhas + i; s++){
            printf(" ");
        }
        
        
        for ( int k = numero_comeco; k < numero_final; k++){
            int espaco = 0;
            if(k == numero_final - 1){
                printf("%d\n", array[k]);
            }

            else{
                printf("%d", array[k]);
            }

            


        }

        numero_comeco = numero_comeco + 1;
        numero_final = numero_final - 1;
        
    }
    


    return 0;
}