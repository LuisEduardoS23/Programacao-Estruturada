#include <stdio.h>
#include <locale.h>

int item;
int quantidade;
float total;
float total_com_desconto;
int compra (){
    setlocale(LC_ALL, "Portuguese");

    printf("Quais itens você deseja comprar? DIGITE O NÚMERO CORRESPONDENTE AO ITEM:\n 1* PÃO_______R$ 2,00 un.\n 2* BOLO______R$ 5,00 un.\n 3* CROISSANT_R$ 3,00 un.\n RESPOSTA:  ");
    scanf("%d", &item);

    printf("Qual a quantidade do item?  \n");
    scanf("%d", &quantidade);
    return 0;
}

int main (){
    setlocale(LC_ALL, "Portuguese");

    printf("BEM VINDO AO PROGRAMA DA NOSSA PADARIA!\n");

    compra();

    if (item == 1){
        total = 2.0 * quantidade;
        printf("O VALOR TOTAL DA COMPRA, COM DESCONTO DE R$0,00 É R$%.2f. \n", total);
    }
    else if(item == 2){
        total = 5.0 * quantidade;
        total_com_desconto = total * 0.9;
        printf("O VALOR TOTAL DA COMPRA, COM DESCONTO DE R$%.2f É R$%.2f. \n", total * 0.1, total_com_desconto);
    }
    else if(item == 3){
        total= 3.0 * quantidade;
        total_com_desconto = total * 0.85;
        printf("O VALOR TOTAL DA COMPRA, COM DESCONTO DE R$%.2f É R$%.2f. \n", total * 0.15, total_com_desconto);
    }
    
    printf("AGRADECEMOS A PREFERÊNCIA!");
}