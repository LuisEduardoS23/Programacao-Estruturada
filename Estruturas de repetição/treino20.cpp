#include <stdio.h>
#include <locale.h>


int main (){

        setlocale (LC_ALL, "Portuguese");

        int menor_num, maior_num;

        printf("Digite o número inicial:  ");
        scanf("%d", &menor_num);

        printf("Digite o número limite:  ");
        scanf("%d", &maior_num);

        for (int i = menor_num + 1; i < maior_num; i++){
            printf("%d\n",i );
        }
        

    return 0;
}