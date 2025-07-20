#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int array [6];

    for (int i = 0; i < 5; i++){
        int numero;
        printf("Digite o número de posição %d° do array:", i);
        scanf("%d", &numero);

        array[i] = numero;
    }
    int acao;
    printf("O que deseja fazer a seguir?\n DIGITE:\n 0 -- Encerrar o programa;\n 1 -- Mostrar o vetor na ordem direta;\n 2 -- Mostrar vetor na ordem inversa.\n RESPOSTA : ");
    scanf("%d", &acao);

    if (acao == 0){
        printf("Programa encerrado.");
    }
    else if (acao == 1){
        for (int j = 0; j <= 4; j++){
            printf("%d\n", array[j]);
        }
    }
    else if (acao == 2){
        for (int k = 4; k >=0; k--){
            printf("%d\n", array[k]);
        }
    }
    else{
        printf("ERRO!!! CÓDIGO INVÁLIDO...");
    }
    return 0;
}