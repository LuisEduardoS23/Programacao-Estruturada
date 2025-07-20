#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>


void menu ();
void lancar_moeda ();
void calculadora_probabilidade ();

int main (){
    unsigned int seed = (unsigned int) GetTickCount();
    srand(seed);

    menu ();

    return 0;
}

void menu (){
    int option;
    do {
    printf("O QUE DESEJA REALIZAR? \n");
    printf("    0 - FECHAR PROGRAMA;\n    1 - LANCAR UMA MOEDA;\n    2 - DESCOBRIR A PORCENTAGEM DO LANCAMENTO DE UMA MOEDA.");
    scanf("%d", &option);

        if (option){

            switch (option)
            {
            case 1:
                lancar_moeda();
                break;
            case 2:
                calculadora_probabilidade();
                break;
            
            default:
            printf("OPS!!! OPCAO INVALIDA...");
                break;
            }

        }
        else
        {
            printf("ENCERRANDO...");
        }
        
    }

    while (option);
}


void lancar_moeda (){
    int lado_usuario;
    printf("QUAL LADO DESEJA, CARA OU COROA?\n");
    printf("DIGITE:\n 1 - PARA CARA;\n 2 - PARA COROA.\n");
    scanf("%d", &lado_usuario);
    switch (lado_usuario)
    {
    case 1:
        printf("ENTAO EU FICO COM COROA.\n");
        break;
    case 2:
        printf("ENTAO EU FICO COM CARA.\n");
    
    default:
        break;
    }

    //0 para cara e 1 para coroa//


    int num_aleatorio = rand()% 2;
    printf("JOGANDO A MOEDA.....\n");
    Sleep(2000);


    if (lado_usuario == 1 && num_aleatorio == 0){
        printf("PARABENS VOCE ACERTOU, DEU CARA!!");
    }

    else if (lado_usuario == 1 && num_aleatorio == 1){
        printf("HA! HA! EU GANHEI!!! DEU COROA MAS VOCE ESCOLHEU CARA.");
    }
    else if (lado_usuario == 2 && num_aleatorio == 0){
        printf("HA! HA! EU GANHEI!!! DEU CARA MAS VOCE ESCOLHEU COROA.");
    }
    else if (lado_usuario == 2 && num_aleatorio == 1){
        printf("PARABENS VOCE ACERTOU, DEU COROA!!");
    }
    

}

void calculadora_probabilidade (){

    int num_jogadas;
    float  num_caras = 0.0, num_coroas = 0.0;


    printf("DIGITE O NUMERO DE VEZES QUE QUER JOGAR A MOEDA:      \n");
    scanf("%d", &num_jogadas);

    for (int i = 1; i <= num_jogadas; i++)
    {
        int num_aleatorio = rand() % 2;

        switch (num_aleatorio)
        {
        case 0:
            num_caras++;
            break;
        case 1:
            num_coroas++;
            break;
        
        default:
            break;
        }
    }

    printf("EM %d JOGADAS, %0.f DAS VEZES DEU CARA E %0.f DAS VEZES DEU COROA.\n", num_jogadas, num_caras, num_coroas);
    printf("SENDO %.2f%% DE CHANCE DE DAR CARA E %.2f%% DE CHANCE DE DAR COROA.\n", (num_caras/num_jogadas)*100, (num_coroas/num_jogadas)*100);


    

}