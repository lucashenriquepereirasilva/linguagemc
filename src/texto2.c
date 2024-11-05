#include <stdio.h>

int main(){


    char nome [20]; 
    printf("escrever seu nome e tecle enter");
    // foi nessecario ultilizar  o colchetes para que o comando scanf receba toda a cadeia de caracters.
    //o elemento ^(circunflexo foi usado para indicar onde começa o primeiro caracter. e comando \n, neste caso. está sendo usado para ler o espaço aplicado. ao final é ultilizado o caracter s (string). //
    scanf("%s",&nome);
    printf("Olá, %s. seja bem vindo\n",nome);


    return 0;
}