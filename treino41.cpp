#include <stdio.h>
#include <string.h>

void menu ();
void veredito (char [][20], double [], int);

int main (){
    menu ();

    return 0;
}

void menu (){

    int num_alunos;

    printf("QUANTOS ALUNOS TEM A TURMA?     \n\n");
    scanf(" %d", &num_alunos);

    char nomes_alunos [num_alunos][20];
    double notas [num_alunos];

    for (int i = 0; i < num_alunos; i++)
    {
        printf("DIGITE O PRIMEIRO NOME DO ALUNO_%d:     ", i+1);
        scanf("%20s", &nomes_alunos[i]);
        
        printf("\n");
        printf("    DIGITE A NOTA DE (%s):     ", nomes_alunos[i]);
        scanf("%lf", &notas[i]);
        printf("\n");
    }
    veredito(nomes_alunos, notas, num_alunos);
    
}

void veredito (char nomes[][20], double notas [], int numero){

    printf("\n");
    for (int i = 0; i < numero; i++)
    {
        if (notas[i] > 7 )
        {
            printf("%s foi APROVADO(A) com nota igual a: %.2lf \n", nomes[i], notas[i]);
        }
        else if (notas[i]<= 7 && notas[i] >= 5){
            printf("%s esta EM RECUPERACAO com nota igual a: %.2lf \n", nomes[i], notas[i]);
        }
        else
        {
            printf("%s foi REPROVADO com nota igual a: %.2lf \n", nomes[i], notas[i]);
        }
        
    }
    

}


