#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    //CONTRU��O DA MATRIZ

    float matriz [5][3];

    for (int linha = 0; linha < 5; linha++){
        
        
        for (int coluna = 0; coluna < 3; coluna++){
            float notas;
            printf("Digite a %d nota do %d aluno:  ",coluna + 1, linha + 1);
            scanf("%f", &notas);

            matriz[linha] [coluna] = notas;
            printf("Nota lida: %.2f\n", notas);
        }
    }


// ALUNOS DA PROVA 1
   for ( int linha = 0; linha < 5; linha++){
        if (matriz [linha] [0] < matriz [linha] [1] && matriz [linha] [0] < matriz [linha] [2]){
            printf("O aluno %d teve a menor nota na avalia��o 1\n", linha + 1);
        }
        else if (matriz [linha] [1] < matriz [linha] [0] && matriz [linha] [1] < matriz [linha] [2]){
            printf("O aluno %d teve a menor nota na avalia��o 2\n", linha + 1);
        }
        else if (matriz [linha] [2] < matriz [linha] [0] && matriz [linha] [2] < matriz [linha] [1]){
            printf("O aluno %d teve a menor nota na avalia��o 3\n", linha + 1);
        }
        else if (matriz [linha] [ 0] == matriz [linha] [1] && matriz [linha] [0] < matriz [linha] [2]){
            printf("O aluno %d teve menor nota nas avalia��es 1 e 2\n", linha + 1);
        }
        else if (matriz [linha] [0] == matriz [linha] [2] && matriz [linha] [0] < matriz [linha] [1]){
            printf("O aluno %d teve menor nota nas avalia��es 1 e 3\n", linha + 1);
        }

        else if (matriz [linha] [1] == matriz [linha] [2] && matriz[linha] [1] < matriz[linha] [0]){
            printf("O aluno %d teve menor nota nas avalia��es 2 e 3\n", linha + 1);
        }
        else if (matriz [linha] [0] == matriz [linha] [1] && matriz [linha] [1] == matriz [linha] [2]){
            printf("O aluno %d teve a mesma nota em todas as avalia��es\n", linha + 1);
        }
   }
   
    



    return 0;
}