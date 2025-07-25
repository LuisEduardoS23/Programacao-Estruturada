#include <stdio.h>

int main (){

    int tamanho_array;
    

    printf("ORGANIZADORA DE ARRAYS\n");
    printf("Quantos inteiros deseja armazenar no array?     \n");
    scanf("%d", &tamanho_array);

    int array[tamanho_array];

    for (int i = 0; i < tamanho_array; i++)
    {
        printf("DIGITE O %d VALOR DO ARRAY:     \n", i+1);
        scanf("%d", &array[i]);    
    }


    for (int i = 0; i < tamanho_array; i++)
    {
        for (int j = i; j > 0; j--)
            {
                if (array[j] > array[j-1])
                {                    
                    int aux = array[j-1];
                    array[j-1] = array[j];
                    array[j] = aux;
                }                
            }

        }
        
    for (int i = 0; i < tamanho_array; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}