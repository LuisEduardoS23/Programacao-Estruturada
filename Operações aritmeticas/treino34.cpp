#include <stdio.h>
#include <math.h>

void menu ();
float hipo (float lado_a, float lado_b);

int main (){

    menu ();

    return 0;
}

void menu (){
    int option;
    do {

        printf("DESEJA CALCULAR A HIPOTENUSA DE UM TRIANGULO?\n");
        printf("0 - NAO;\n");
        printf("1 OU MAIS - SIM.\n");
        scanf("%d", &option);
        

        if (option){
            float num1, num2;
            printf("DIGITE O VALOR DO LADO A DO TRIANGULO:  \n");
            scanf("%f", &num1);
            printf("DIGITE O VALOR DO LADO B DO TRIANGULO:  \n");
            scanf("%f", &num2);

            printf("O VALOR DA HIPOTENUSA E:    %.3f\n", hipo(num1, num2));
        }

    }
    while (option);
}

float hipo (float lado_a, float lado_b){
    float lado_a_quadrado = pow(lado_a, 2);
    float lado_b_quadrado = pow(lado_b, 2);

    float hipotenusa = sqrt(lado_a_quadrado + lado_b_quadrado);
    
    return hipotenusa;
    
}