#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


struct produto{
    char nome [30];
    float preco;
    int quantidade;
    int dia_val;
    int mes_val;
    int ano_val;
};
    int numero;
    char nome_temp[30];



int verificador_validade (){
    // Obt?m o tempo atual
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    // Extrai o dia, m?s e ano
    int dia = tm_info->tm_mday;      // Dia do m?s
    int mes = tm_info->tm_mon + 1;   // M?s (0-11, ent?o adicionamos 1)
    int ano = tm_info->tm_year + 1900; // Ano desde 1900

    

    return 0;
}

int main (){
    setlocale(LC_ALL, "Portuguese");

    printf("Quantos produtos voc? quer adicionar no sistema?");
    scanf("%d", &numero);
    getchar(); // Limpa o buffer

    struct produto produtos[numero];
    for (int i = 0; i < numero; i++){
        
        
        printf("Insira o nome do %d produto:  \n", i+1);
        fgets(nome_temp, 30, stdin);

        nome_temp[strcspn(nome_temp, "\n")] = 0;
        strcpy(produtos[i].nome, nome_temp);
        getchar(); // Limpa o buffer

        printf("Insira o pre?o do %d produto:  ", i+1);
        scanf("%f", &produtos[i].preco);
        getchar(); // Limpa o buffer

        printf("Insira a quantidade do %d produto:  ", i+1);
        scanf("%d", &produtos[i].quantidade);
        getchar(); // Limpa o buffer

        printf("Insira o DIA da validade do %d produto:  ", i+1);
        scanf("%d", &produtos[i].dia_val);
        getchar(); // Limpa o buffer

        printf("Insira o M?S da validade do %d produto:  ", i+1);
        scanf("%d", &produtos[i].mes_val);
        getchar(); // Limpa o buffer
        
        printf("Insira o ANO da validade do %d produto:   ", i+1);
        scanf("%d", &produtos[i].ano_val);
        printf("\n");

        getchar(); // Limpa o buffer
    }

    while (1){
    
    
    int decisao;
    printf("O QUE SEJA FAZER AGORA?\n *1 - COMPRAR UM PRODUTO;\n *2 - MOSTRAR TODOS OS PRODUTOS CADASTRADOS;\n *3 - ENCERRAR PROGRAMA;\n DECIS?O:  ");
    scanf("%d", &decisao);

    if (decisao == 1){
        printf("Digite o n?mero referente ao produto que deseja comprar: \n");
        for (int i = 0; i < numero; i++){
            printf("%d  === Nome: %s---------Quantidade em estoque: %d \n", i, produtos[i].nome, produtos[i].quantidade);
        }
        int produto_desejado;
        printf("N?mero do produto:  \n");
        scanf("%d", &produto_desejado);

        int unidades_desejadas;
        printf("Quantas unidades deseja comprar?\n");
        scanf("%d", &unidades_desejadas);

        //Verificar validade//

         time_t t = time(NULL);
        struct tm *tm_info = localtime(&t);

        int dia = tm_info->tm_mday;      // Dia do m?s
        int mes = tm_info->tm_mon + 1;   // M?s (0-11, ent?o adicionamos 1)
        int ano = tm_info->tm_year + 1900; // Ano desde 1900

        bool validade;

        if (produtos[produto_desejado].ano_val < ano){
            validade = false;
        }
        else if(produtos[produto_desejado].ano_val == ano && produtos[produto_desejado].mes_val < mes){
            validade = false;
        }
        else if (produtos[produto_desejado].ano_val == ano && produtos[produto_desejado].mes_val == mes && produtos[produto_desejado].dia_val <= dia){
            validade = false;
        }
        else{
            validade = true;
        }
    
        if(validade == true && produtos[produto_desejado].quantidade - unidades_desejadas >= 0){
            produtos[produto_desejado].quantidade = produtos[produto_desejado].quantidade - unidades_desejadas;
            printf("Voc? comprou %d unidades do protudo:  %s. Restam %d no estoque.\n", unidades_desejadas, produtos[produto_desejado].nome, produtos[produto_desejado].quantidade);

        }
        else if (validade == false){
            printf("O produto desejado est? fora do prazo de validade. Por favor fale com um supervisor!\n");
        }
        else if(produtos[produto_desejado].quantidade - unidades_desejadas < 0){
            printf("Quantidade dispon?vel insuficiente! (Quantidade dispon?vel: %d / Quantidade solicitada: %d)\n", produtos[produto_desejado].quantidade, unidades_desejadas);
        }
    }

    else if (decisao == 2){
        for (int i = 0; i < numero; i++)
        {   
            printf("Produto n?mero %d\n", i);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Pre?o: %.2f\n", produtos[i].preco);
            printf("Quantidade em estoque: %d\n", produtos[i].quantidade);
            printf("Data de validade: %d/%d/%d\n", produtos[i].dia_val, produtos[i].mes_val, produtos[i].ano_val);
            printf("--------------------------------------------------------\n");
        }
        
    }

    else if (decisao == 3){
        printf("Programa encerrado...");
        exit(0);
    }
    

    }
}

