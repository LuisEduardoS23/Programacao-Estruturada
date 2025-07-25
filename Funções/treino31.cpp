#include <stdio.h>
#include <locale.h>
int num;

int num_algarismos (int numero){

    int algarismos;

    if (numero == 0){
        algarismos = 1;
    }
    else
    {
        while (numero != 0)
        {
            numero /= 10;
            algarismos++;
        }
        
    }
    
    
    return algarismos;


}

void inversor (){
    setlocale(LC_ALL, "Portuguese");
    char numero_char [11];

    sprintf (numero_char , "%d" , num);


    printf("NUMERO INVERTIDO:   ");
    for (int i = num_algarismos(num) + 1; i >= 0; i--)
    {
        printf("%c", numero_char[i]);
    }
    printf("\n");

}

void menu (){
    setlocale(LC_ALL, "Portuguese");

    int option;
    do {
    printf("DESEJA INVERTER UM NÚMERO?\n");
    printf("   0 - NÃO;\n   1 - SIM.   \n");
    scanf("%d", &option);


    if (option){
        printf("DIGITE O NÚMERO QUE DESEJA INVERTER (até 10 algarismos)    \n");
        scanf("%d", &num);

        num_algarismos(num);
        inversor ();
    }
    else
    {
        printf("ENCERRANDO...");
    }
    

    }

    
    while (option);
    
}

int main (){
    menu();


    return 0;
}