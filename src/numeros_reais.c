#include <stdio.h>
int main() {
    // tipo float é para trabalhar com casas decimais //
    float n1, n2,soma, divisão;
    printf("Digite um Numero:\n");
    scanf("%f",n1);
    printf("Digite o Segundo Numero:\n");
    scanf("%d",&n2);

    soma = n1 + n1;
    divisão = n1 / n2;
    printf("O resultado da Soma é %.2f\n",soma);
    printf("O resultado da Divisão é %.2f\n",
    divisão);


}