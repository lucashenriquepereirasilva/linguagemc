#include <stdio.h>
int main(){
    int n1;
    int n2; 
    int rs;
    printf("digite um numero: \n");
    // ("alocar o número digitado pelo usuário no endereço de memoria da variavel n1 //
    scanf("%d",&n1);
    printf("Digite outro Número: \n");
    scanf("%d",&n2);
    // realizar a soma entra n1 e n2 //
    rs = n1+n2;
    // exibir o resultado da soma //
    printf("O resultado é %d\n",rs);
    return 0;
}
     