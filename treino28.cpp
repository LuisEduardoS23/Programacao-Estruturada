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
        printf("N�O � POSSIVEL DIVIDIR POR 0!!!\a\n");
    }
    
}



void menu (){
    int option;
    float num1, num2;

    do  {
    //COLETA QUAL A OPERA��O//
    printf("=-=-=- MENU -=-=-= \n");
    printf("ESCOLHA UMA OPERA��O:\n");
    printf("    0 - Encerrar programa;\n    1 - Adi��o;\n    2 - Subtra��o;\n    3 - Multiplica��o;\n    4 - Divis�o;    \n");
    scanf("%d", &option);

    //COLETA QUAIS N�MEROS FAR�O PARTE DA OPERA��O//

    if (option) {
    printf("DIGITE O PRIMEIRO N�MERO DA OPERA��O (use v�rgula caso necess�rio):   \n");
    scanf ("%f", &num1);

    printf("DIGITE O SEGUNDO N�MERO DA OPERA��O (use v�rgula caso necess�rio):    \n");
    scanf ("%f", &num2);
    
    //CHAMA AS FUN��ES DAS RESPECTIVAS OPERA��ES//

    
    switch (option){

        case 1:
            printf("Soma: %.3f\n", adicao(num1, num2));
            break;
        
        case 2: 
            printf("Diferen�a: %.3f\n", subtracao(num1, num2));
            break;

        case 3:
            printf("Produto: %.3f\n", multiplicacao(num1, num2));
            break;

        case 4:
            if (num2){
            printf("Divis�o: %.3f\n", divisao(num1, num2));
            }
            else{
                divisao(num1, num2);
            }
            break;

        default:
            printf("OP��O INV�LIDA!!!\a");
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