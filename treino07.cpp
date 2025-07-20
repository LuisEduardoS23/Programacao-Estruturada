#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float valor = 0;

    for (int i = 1; i < 4; i+= 1) {
        float valor_digitado;
        printf("Digite o %d° valor:   ", i);
        scanf("%f", &valor_digitado);

        if(valor_digitado > valor){
            valor = valor_digitado;
        }


    }
    
    printf("O maior valor digitado foi %.3f", valor);


    return 0;
}