#include <stdio.h>

int num1, num2;
void menu ();
int menor_num ();
int mdc ();



int main (){
    menu();

    return 0;
}

void menu (){
    int option;
    printf("            CALCULADORA DE MDC\n");
    do{
    printf("Digite o 1 numero:     \n");
    scanf("%d", &num1);
    printf("Digite o 2 numero:     \n");
    scanf("%d", &num2);

    printf("MDC:  %d\n\n", mdc());

    printf("Digite:\n     0 - PARA ENCERRAR O PROGRAMA;\n     1 OU MAIS - CALCULAR NOVAMENTE.\n");
    scanf("%d", &option);
    }

    while (option);
    
}

int menor_num (){
    if (num1 < num2){
        return num1;
    }
    else if (num2 < num1){
        return num2;
    }
}

int mdc (){
    int mdc = 1;

    for (int divisor = menor_num(); divisor > 0; divisor--){

        if (num1 % divisor == 0 && num2 % divisor == 0){
            num1 = num1/ divisor;
            num2 = num2/ divisor;
            mdc = mdc * divisor;
        }
        
    }
    
    return mdc;
}
