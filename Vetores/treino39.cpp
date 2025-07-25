#include <stdio.h>

double array [10];

void receber_numeros ();
void ordem_crescente ();


int main (){
    receber_numeros();
    ordem_crescente ();

    printf("O MAIOR NUMERO DO ARRAY E:  %.3lf\n", array[9]);
    printf("O MENOR NUMERO DO ARRAY E:  %.3lf\n", array[0]);




    return 0;
}

void receber_numeros (){
    for (int i = 0; i < 10; i++){
        
            printf("Digite o %d numero:     ", i+1);
            scanf("%lf", &array[i]);
            printf("\n");
    }
}

void ordem_crescente (){

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] < array[j-1])
            {
                float aux = array [j-1];
                array[j-1] = array[j];
                array[j] = aux;
            }
            
        }
        
    }
    
    
}