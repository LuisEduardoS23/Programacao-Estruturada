#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor [11];

    for (int i = 0; i < 10; i++){
        printf("Digite o %d° número do vetor:  ", i+1);
        scanf("%d", &vetor[i]);

        for (int j = i; j > 0 && vetor[j] < vetor [j -1]; j--){
           int temporario = vetor[j];
          vetor[j] = vetor[j-1];
           vetor[j - 1] = temporario;
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
    
    return 0;
}