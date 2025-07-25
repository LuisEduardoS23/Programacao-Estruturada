#include <stdio.h>
#include <locale.h>

int num1;
int num2;
int operacao;
float resultado;

int tipo_operacao (){

    printf("Qual o tipo de operacao deseja fazer com esses numeros? \n Digite o numero equivalente:\n SOMA - 1;\n SUBTRACAO - 2;\n MULTIPLACAO - 3;\n DIVISAO - 4.\n");

    scanf("%d", &operacao);

    if (operacao == 1){

        resultado = num1 + num2;
    }
    else if (operacao == 2){

        resultado = num1 - num2;
    }
    else if (operacao == 3){

        resultado = num1 * num2;

    }
    else if (operacao == 4){
        
        resultado = num1/num2;
    }

    printf("o resultado da sua operacao e: %.2f", resultado);

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Escolha um numero:\n");
    scanf("%d", &num1);

    printf("Escolha um segundo numero\n");
    scanf("%d", &num2);

    tipo_operacao();

    return 0;
}
