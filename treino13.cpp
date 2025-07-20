#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int idade;
    char classificacao [11];
    printf("Insira a idade do paciente: \n");
    scanf("%d", &idade);

    if(idade >= 60){
        char estado [11] = "Prioridade";
        strcpy(classificacao, estado);
        printf("O paciente tem %d anos e é classificado como %s. Deve ser atendido com prioridade.\n", idade, classificacao);
    }
    else{
        char estado [11] = "Normal";
        strcpy(classificacao, estado);
        printf("O paciente tem %d anos e é classificado como %s. Será atendido de acordo com a ordem de chegada.\n", idade, classificacao);
    }

    return 0;
}