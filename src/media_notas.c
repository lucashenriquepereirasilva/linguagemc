#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4, media;

    // solicita as notas do usuario
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a Segunda nota: ");
    scanf("%f", &nota2);

    printf("digite a Terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a Quarta nota: ");
    scanf("%f", &nota4);

    // Calcule a Média
    media = (nota1 + nota2 + nota3 +nota4) / 4;

    // Exibir o Resultado
    printf("A média das notas é %.2f\n",media);

    return 0;
}