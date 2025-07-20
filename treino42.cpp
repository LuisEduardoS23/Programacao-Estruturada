#include <stdio.h>

struct Aluno
{
    char nome [50];
    int idade;
    char cpf[11];

};

Aluno insersor_dados (){
    Aluno aluno;

    printf("Digite o nome do aluno:     ");
    fgets (aluno.nome, 50, stdin);


    printf("\nDigite a idade do aluno:     ");
    scanf("%d", &aluno.idade);

    printf("\nDigite o CPF do aluno:      ");
    scanf("%s", &aluno.cpf);

    return aluno;
}

void impressora_dados (Aluno aluno){

    printf("\nNOME: %s", aluno.nome);
    printf("\nIDADE: %d\n", aluno.idade);
    printf("CPF: %s\n", aluno.cpf);
}

int main (){
    Aluno aluno_teste = insersor_dados();
    impressora_dados(aluno_teste);

}

