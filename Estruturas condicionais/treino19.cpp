#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int mes, ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    

    int option;

   do
   {

    printf("Escolha um mês (DIGITE DE 1 À 12):  ");
    scanf ("%d", &mes);


        switch (mes){

        case 1:
                printf("O mês de janeiro de %d tem 31 dias.\n", ano);
            break;

        case 2:
            if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
                printf("O mês de fevereiro de %d tem 29 dias.\n", ano);
            }
            else
            {
                printf("O mês de fevereiro de %d tem 28 dias.\n", ano);
            }
            break;
        
        case 3: 
            printf("O mês de março de %d tem 31 dias.\n", ano);
            break;

        case 4:
            printf("O mês de abril de %d tem 30 dias.\n", ano);
            break;

        case 5:
            printf("O mês de maio de %d tem 31 dias.\n", ano);
            break;
        
        case 6:
            printf("O mês de junho de %d tem 30 dias.\n", ano);
            break;

        case 7:
            printf("O mês de julho de %d tem 31 dias.\n", ano);
            break;

        case 8:
            printf("O mês de agosto de %d tem 31 dias.\n", ano);
            break;

        case 9:
            printf("O mês de setembro de %d tem 30 dias.\n", ano);
            break;

        case 10:
            printf("O mês de outubro de %d tem 31 dias.\n", ano);
            break;

        case 11:
            printf("O mês de novembro de %d tem 30 dias.\n", ano);
            break;

        case 12:
            printf("O mês de dezembro de %d tem 31 dias.\n", ano);
            break;
    }
        
    printf("Deseja fechar o programa?\n 1 - SIM\n 2 - NÃO        ");
    scanf("%d", &option);

    
}
while (option == 2);


    return 0;
}

