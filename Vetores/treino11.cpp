#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int array [11];

    for (int i = 0; i < 10; i++)
    {
        int numero;
        printf("Digite o %d° número:  ", i+1);
        scanf ("%d", &numero);

        array[i] = numero;

        for (int j = i; j>0 && array[j] > array[j - 1]; j--){
            int salvador_de_dado = (array[j - 1]);
            array[j - 1] = array[j];
            array[j] = salvador_de_dado;
        }
        
    }

    for (int k = 0; k < 10; k++){
        if(k==0){
            printf("%d", array[k]);
        }
        else{
            printf(" - %d", array[k]);
        }
    }
    
    return 0;
}
