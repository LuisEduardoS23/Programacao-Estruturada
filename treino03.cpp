#include <stdio.h>
#include <locale>
#include <string.h>

char nome[50];
int idade;
int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Qual o seu nome? \n");
    fgets(nome, 50 , stdin);

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    nome[strcspn(nome, "\n")] = 0; //RETIRA O \N QUE  QUEBRA A LINHA

    printf("Olá %s, você tem %d anos, correto?", nome, idade);

    return 0;
}
 