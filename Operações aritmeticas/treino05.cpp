#include <stdio.h>
#include <locale.h>
#include <math.h>

int num1;
int num2;

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    printf("Escolha um numero:");
    scanf("%d", &num1);

    printf("Escolha um segundo numero:");
    scanf("%d", &num2);

    printf("A soma entre eles e %d; \n", num1 + num2);

    int quadrado_do_seg = pow(num2, 2);
    printf("O produto do primeiro pelo quadrado do segundo e: %d; \n", num1 * quadrado_do_seg );

    int quadrado_do_pri = pow(num1, 2);
    printf("O quadrado do primeiro numero e: %d; \n", quadrado_do_pri);

    float raiz_dos_quadrados = sqrt(quadrado_do_pri + quadrado_do_seg);
    printf("A raiz quadrada da soma dos quadrados e: %.4f; \n", raiz_dos_quadrados);

    int diferenca = num1 - num2;
    float seno_da_diferenca = sin(diferenca);

    printf("O seno da diferenca entre os numeros e: %.4f; \n", seno_da_diferenca);

    int modulo;
    if (num1 < 0){
        modulo = -1 * num1;
    }
    else{
        modulo = num1;
    }

    printf("O modulo do primeiro numero e: %d", modulo);

    return 0;
}