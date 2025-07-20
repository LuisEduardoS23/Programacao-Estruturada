#include <stdio.h>
#include <string.h>

double chuvas [7];
double media_chuva = 0;
char dias_semana [7][20] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

void receber_numeros ();
void ordem_crescente ();


int main (){
    receber_numeros();
    ordem_crescente ();

    printf("O DIA EM QUE MAIS CHOVEU FOI %s COM %.3lf DE PRECIPITACAO\n", dias_semana[6],  chuvas[6]);
    printf("O DIA EM QUE MENOS CHOVEU FOI %s COM %.3lf DE PRECIPITACAO\n", dias_semana[0],  chuvas[0]);
    printf("A MEDIA DE CHUVAS DA SEMANA FOI: %.3lf DE PRECIPITACAO\n", media_chuva);





    return 0;
}

void receber_numeros (){
    for (int i = 0; i < 7; i++){
        
            printf("Digite a quantidade de chuva de %s:     ", dias_semana[i]);
            scanf("%lf", &chuvas[i]);
            media_chuva += chuvas[i];
            printf("\n");
    }
}

void ordem_crescente (){

    for (int i = 0; i < 7; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (chuvas[j] < chuvas[j-1])
            {
                float aux = chuvas [j-1];
                chuvas[j-1] = chuvas[j];
                chuvas[j] = aux;

                char auxiliar [20];
                strcpy( auxiliar, dias_semana[j-1] );
                strcpy(dias_semana[j-1], dias_semana[j]);
                strcpy(dias_semana[j], auxiliar);
                
                

            }
            
        }
        
    }
    
    
}