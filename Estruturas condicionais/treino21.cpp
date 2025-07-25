#include <stdio.h>

int main (){
    int validez;
    int nota;

    do {


        printf("Digite uma nota de 0 a 10:  ");
        scanf ("%d", &nota);

        if (nota < 0 || nota > 10){
            validez = 0;
        }
        else
        {
            validez= 1;
        }
        
        
    }
    while (validez == 0);

    printf("Parabens, voce digitou certo, sua nota e %d", nota);
    

    return 0;
}