#include <stdio.h>

int main(){
    float km_inicial, km_final, tempo_inicial, tempo_final, distancia, tempo, velocidade_media;

    //solicita os dados  ao usuário
    printf("Digite a quilometragem inicial  (km): ");
    scanf("%f", &km_inicial);

    printf("Digite a quilometragem final (km):  ");
    scanf("%f" ,&km_final);

    printf("digite o tempo inicial (horas): ");
    scanf("%f", &tempo_inicial);
    
    printf("Digite o tempo final (horas): ");
    scanf("%f", &tempo_final);

    // calcula a distãncia percorrida e o tempo gasto
    distancia = km_final - km_inicial;

    tempo = tempo_final - tempo_inicial;
    
    // verifica se o tempo é valido

    // calcula o valor da media 
    velocidade_media = distancia / tempo;

    // exibir o resultado
    printf("a velocidade média é: %.2f km/h\n", velocidade_media);
}