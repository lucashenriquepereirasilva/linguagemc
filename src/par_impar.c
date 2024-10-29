/*Esse programa obtem um número do usuarío e diz se é par, exibindo uma mensagem em tela */
#include <stdio.h>
int main (){
    int n;
    printf("Digite um numero e tecle enter\n");
    scanf("%d",&n);
    if( n % 2 == 0){
        printf("O valor %d é par\n",n);
    }
    else{
          printf("O Número %d é impar\n");

    }
    
    return 0;
}