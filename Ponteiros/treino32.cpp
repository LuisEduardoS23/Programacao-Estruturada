#include <stdio.h>

void passagem_valor ( int number);
void referencia_ponteiro (int &number);

int main (){
    int num;

    printf("Digite um inteiro:  \n");
    scanf("%d", &num);

    printf("NUMERO ANTES:   %d\n", num);
    passagem_valor(num);
    printf("NUMERO DEPOIS DA PASSAGEM DE VALOR:     %d\n", num );
    referencia_ponteiro(num);
    printf("NUMERO DEPOIS DO PONTEIRO:     %d\n", num );

    return 0;
}

void passagem_valor(int number){
    number = number * number * number;
    printf("NUMERO COM A PASSAGEM DE VALOR (COPIA):     %d\n", number );

}

void referencia_ponteiro (int &number){

    number = number * number * number;
    printf("NUMERO COM REFERENCIA (PONTEIRO):   %d\n", number);


}