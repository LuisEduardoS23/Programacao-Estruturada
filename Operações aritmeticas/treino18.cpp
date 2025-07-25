#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    char alfabeto [27] = "abcdefghijklmnopqrstuvwxyz";


    char nome1 [15];
    char nome2 [15];
    

    printf("Digite o primeiro nome:  ");
    scanf("%s", &nome1);

    printf("Digite o segundo nome:  ");
    scanf("%s", &nome2);

    int letras_nome1 = strlen(nome1);
    int letra_nome2 = strlen(nome2);
    int menor_nome;
    if (letras_nome1 <= letra_nome2){
        menor_nome = letras_nome1;
    }
    else if (letra_nome2 < letras_nome1){
        menor_nome = letra_nome2;
    }
    

    int primeiras_letras_nome1 [menor_nome];
    int primeiras_letras_nome2 [menor_nome];
    int primeiro_nome;

    for (int letras = 0; letras < menor_nome; letras++){
    
    // COMPARANDO LETRAS DO PRIMEIRO NOME
    for (int i = 0; i < letras_nome1 ; i++){
        
        for (int j = 0; j < 27; j++){
            if (alfabeto[j] == nome1 [i]){
            primeiras_letras_nome1[letras] = j;
            break;

        }}}
    // COMPARANDO LETRAS DO SEGUNDO NOME
    for (int k = 0; k < letra_nome2; k++){

        for (int l = 0; l < 27; l++){
            
            if (alfabeto[l] == nome2[k]){
                primeiras_letras_nome2[letras] = l;
                break;
        }}}
    
    if (primeiras_letras_nome1[letras] < primeiras_letras_nome2[letras]){
        primeiro_nome = 1;
        break;
        
    }
    else if (primeiras_letras_nome2[letras] < primeiras_letras_nome1[letras]){
        primeiro_nome = 2;
        break;
    }

    }

    if (primeiro_nome == 1){
        printf("A ordem é:\n%s\n%s\n", nome1, nome2);
    }
    else if (primeiro_nome == 2){
        printf("A ordem é:\n%s\n%s\n", nome2, nome1);
    }
    else {
        printf("Os nomes são iguais.");
    }
    
    return 0;
}




