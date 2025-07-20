#include <stdio.h>
#include <locale.h>

int num1;
int num2;
int operacao;
float resultado;

int tipo_operacao (){

    printf("Qual o tipo de opera��o deseja fazer com esses n�meros? \n Digite o n�mero equivalente:\n SOMA - 1;\n SUBTRA��O - 2;\n MULTIPLA��O - 3;\n DIVIS�O - 4.\n");

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

    printf("o resultado da sua opera��o �: %.2f", resultado);

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Escolha um n�mero:\n");
    scanf("%d", &num1);

    printf("Escolha um segundo n�mero\n");
    scanf("%d", &num2);

    tipo_operacao();

    return 0;
}
