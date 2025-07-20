#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int numeros [] = {5, 7, 8, 9, 3, 1, 6, 10, 14, 4};
int numeros_pares [11];
int tamanho = 0;

for (int i = 0; i < 10; i += 1){
    if(numeros [i] % 2 == 0){
        numeros_pares[tamanho] = numeros[i];
        tamanho += 1;
    }
}
for (int j = 0; j < tamanho; j+= 1){
    printf("%d \n", numeros_pares[j]);
}

}