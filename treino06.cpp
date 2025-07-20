#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    
    int celsius = 1;
    int fahrenheit = 2;
    int kelvin = 3;
    int medida_origem;
    int medida_destino;
    float conversao;

    printf("- CONVERSOR DE TEMPERATURA -\n");
    printf("Digite o n�mero correspondente a medida de temperatura QUE SER� CONVERTIDA:\n - CELSIUS = 1; \n - FAHRENHEIT = 2;\n - KELVIN = 3; \n");
    scanf("%d", &medida_origem);

    printf("Digite o n�mero correspondente a medida de temperatura QUE VOC� QUER CONVERTER:\n - CELSIUS = 1; \n - FAHRENHEIT = 2;\n - KELVIN = 3; \n");
    scanf("%d", &medida_destino);

    if (medida_origem == celsius){
        float graus_celsius;

        printf("Digite o valor da temperatura em graus Celsius:   \n");
        scanf("%f", &graus_celsius);

        if(medida_destino == fahrenheit){
            conversao = graus_celsius * 1.8 + 32;
            printf("%2.f �C � igual a %.2f �F. \n", graus_celsius, conversao);
        }
        else if(medida_destino == kelvin){
            conversao = graus_celsius + 273;
            printf("%.2f �C � igual a %.2f �K.", graus_celsius, conversao);
        }
        else if(medida_destino == celsius){
            printf("Voc� j� sabe que %.2f�C � igual a %.2f �C.", graus_celsius, graus_celsius);
        }
        else{
            printf("ERRO! REINICIE E ESCOLHA UM N�MERO APENAS ENTRE AS ALTERNATIVAS");
        }
    }

    else if (medida_origem == fahrenheit){
        float graus_fahrenheit;

        printf("Digite o valor da temperatura em graus Fahrenheit:   \n");
        scanf("%f", &graus_fahrenheit);

        if(medida_destino == celsius){
            conversao = (graus_fahrenheit - 32)/1.8;
            printf("%.2f�F � igual a %.2f�C.", graus_fahrenheit, conversao);
        }
        else if(medida_destino == kelvin){
            conversao = (graus_fahrenheit - 32) * 5/9 + 273;
            printf("%.2f �F � igual a %.2f �K", graus_fahrenheit, conversao);
        }
        else if(medida_destino == fahrenheit){
            printf("Voc� j� sabe que %.2f �F � igual a %.2f �F", graus_fahrenheit, graus_fahrenheit);
        }
         else{
            printf("ERRO! REINICIE E ESCOLHA UM N�MERO APENAS ENTRE AS ALTERNATIVAS");
        }
    }

    else if (medida_origem == kelvin){
        float graus_kelvin;

        printf("Digite o valor da temperatura em graus Kelvin:   \n");
        scanf("%.2f", &graus_kelvin);

        if(medida_destino == celsius){
            conversao = graus_kelvin - 273;
            printf("%.2f �K � igual a %.2f �C", graus_kelvin, conversao);
        }
        else if (medida_destino == fahrenheit){
            conversao = (graus_kelvin - 273) * 1.8 + 32;
            printf("%.2f �K � igual a %.2f �F", graus_kelvin, conversao);
        }
        else if (medida_destino == kelvin){
            printf("Voc� j� sabe que %.2f �K � igual a %.2f �K", graus_kelvin, graus_kelvin);
        }
        else{
            printf("ERRO! REINICIE E ESCOLHA UM N�MERO APENAS ENTRE AS ALTERNATIVAS");
        }
    }

    else{
        printf("ERRO! REINICIE E ESCOLHA UM N�MERO APENAS ENTRE AS ALTERNATIVAS");
        }

    return 0;
}