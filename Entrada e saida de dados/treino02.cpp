#include <stdio.h>
#include <locale.h>
char nome[50];

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("qual seu primeiro nome?");
    scanf ("%s", &nome);

    printf("\aOla %s", nome);

    return 0;
}