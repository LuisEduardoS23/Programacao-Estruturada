#include <stdio.h>
#include <locale.h>

void maior(){
    setlocale(LC_ALL, "Portuguese");
    printf("DIGITE 3 NÚMEROS E DESCUBRA O MAIOR:    \n");
    
    float maior_num = -9999999;
    float num_atual;
    for (int i = 1; i <= 3; i++)
    {
        
        printf("DIGITE O %d° NÚMERO:    \n", i);
        scanf("%f", &num_atual);

        if (num_atual >= maior_num)
        {
            maior_num = num_atual;
        }


        
    }
    printf("MAIOR NÚMERO:   %.3f\n", maior_num);
    

}

void menor (){
    setlocale(LC_ALL, "Portuguese");

    printf("DIGITE 3 NÚMEROS E DESCUBRA O MENOR:    \n");

    float menor_num = 999999999999999999;
    float num_atual;

    for (int i = 1; i <= 3; i++)
    {
        printf("DIGITE O %d° NÚMERO:    \n", i);
        scanf("%f", &num_atual);

        if (num_atual <= menor_num)
        {
            menor_num = num_atual;
        }
        
    }
    printf("MENOR NÚMERO: %.3f\n", menor_num);
    

}


void menu (){
    setlocale(LC_ALL, "Portuguese");
    int option;

    do {
    printf("DESEJA DESCOBRIR O MAIOR OU MENOR NÚMERO?   \n");
    printf("    0 - SAIR;\n    1 - MAIOR;\n    2 - MENOR.\n");
    scanf("%d", &option);

    if (option){
        switch (option)
        {
        case 1:
            maior();
            break;
        case 2:
            menor();
            break;
        
        default:
            printf(" ERROR!!! OPÇÃO INVÁLIDA...");
            break;
        }
    }
    else
    {
        printf("ENCERRANDO PROGRAMA...");
    }
    
    }
    while (option);
}



int main (){
    setlocale(LC_ALL, "Portuguese");
    menu();

    return 0;
}