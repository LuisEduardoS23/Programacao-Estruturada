#include <stdio.h>

float notas [4][4];
char materias [4] [20]= {"Matematica", "Portugues", "Ingles", "Ciencias"};
void inserir_notas ();
void exibir_notas ();

int main (){

    printf("BANCO DE NOTAS DOS ALUNOS\n");
    inserir_notas();
    exibir_notas();


    return 0;
}

void inserir_notas(){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            printf("Digite a nota na materia de %s do ALUNO_0%d:        ", materias[j], i+1);
            scanf("%f", &notas[i][j] );
            printf("\n");
        }  
    }
}

void exibir_notas (){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f    ", notas[i][j]);
        }
        printf("\n");
        
    }
    
}
