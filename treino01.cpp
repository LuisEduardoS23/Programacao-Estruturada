#include <stdio.h>
#include <locale.h>
int numero;

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Escreva um n?mero inteiro:\n");
    scanf("%d", &numero);

    printf("O seu n?mero armazenado ?: %d.", numero);

    return 0;
}