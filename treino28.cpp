#include <stdio.h>
#include <locale.h>

float adicao (float a, float b){
    float somatorio = a + b;
    return somatorio;

}

float subtracao (float a, float b){
    float resto = a - b;
    return resto;
}

float multiplicacao (float a, float b){
    float produto = a * b;
    return produto;
}

float divisao (float a, float b){
    if (b != 0){
        float quociente = a/b;
        return quociente;
    }   
    else {
        printf("NÃO É POSSIVEL DIVIDIR POR 0!!!\a\n");
    }
    
}



void menu (){
    int option;
    float num1, num2;

    do  {
    //COLETA QUAL A OPERAÇÃO//
    printf("=-=-=- MENU -=-=-= \n");
    printf("ESCOLHA UMA OPERAÇÃO:\n");
    printf("    0 - Encerrar programa;\n    1 - Adição;\n    2 - Subtração;\n    3 - Multiplicação;\n    4 - Divisão;    \n");
    scanf("%d", &option);

    //COLETA QUAIS NÚMEROS FARÃO PARTE DA OPERAÇÃO//

    if (option) {
    printf("DIGITE O PRIMEIRO NÚMERO DA OPERAÇÃO (use vírgula caso necessário):   \n");
    scanf ("%f", &num1);

    printf("DIGITE O SEGUNDO NÚMERO DA OPERAÇÃO (use vírgula caso necessário):    \n");
    scanf ("%f", &num2);
    
    //CHAMA AS FUNÇÕES DAS RESPECTIVAS OPERAÇÕES//

    
    switch (option){

        case 1:
            printf("Soma: %.3f\n", adicao(num1, num2));
            break;
        
        case 2: 
            printf("Diferença: %.3f\n", subtracao(num1, num2));
            break;

        case 3:
            printf("Produto: %.3f\n", multiplicacao(num1, num2));
            break;

        case 4:
            if (num2){
            printf("Divisão: %.3f\n", divisao(num1, num2));
            }
            else{
                divisao(num1, num2);
            }
            break;

        default:
            printf("OPÇÃO INVÁLIDA!!!\a");
    }

    }

    else{
        printf("ENCERRANDO...");
    }
}
    while (option);
}






int main (){
    setlocale (LC_ALL, "Portuguese");

    menu();
    return 0;
}