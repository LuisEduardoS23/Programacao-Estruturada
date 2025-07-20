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

    printf("Escolha um m�s (DIGITE DE 1 � 12):  ");
    scanf ("%d", &mes);


        switch (mes){

        case 1:
                printf("O m�s de janeiro de %d tem 31 dias.\n", ano);
            break;

        case 2:
            if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
                printf("O m�s de fevereiro de %d tem 29 dias.\n", ano);
            }
            else
            {
                printf("O m�s de fevereiro de %d tem 28 dias.\n", ano);
            }
            break;
        
        case 3: 
            printf("O m�s de mar�o de %d tem 31 dias.\n", ano);
            break;

        case 4:
            printf("O m�s de abril de %d tem 30 dias.\n", ano);
            break;

        case 5:
            printf("O m�s de maio de %d tem 31 dias.\n", ano);
            break;
        
        case 6:
            printf("O m�s de junho de %d tem 30 dias.\n", ano);
            break;

        case 7:
            printf("O m�s de julho de %d tem 31 dias.\n", ano);
            break;

        case 8:
            printf("O m�s de agosto de %d tem 31 dias.\n", ano);
            break;

        case 9:
            printf("O m�s de setembro de %d tem 30 dias.\n", ano);
            break;

        case 10:
            printf("O m�s de outubro de %d tem 31 dias.\n", ano);
            break;

        case 11:
            printf("O m�s de novembro de %d tem 30 dias.\n", ano);
            break;

        case 12:
            printf("O m�s de dezembro de %d tem 31 dias.\n", ano);
            break;
    }
        
    printf("Deseja fechar o programa?\n 1 - SIM\n 2 - N�O        ");
    scanf("%d", &option);

    
}
while (option == 2);


    return 0;
}

