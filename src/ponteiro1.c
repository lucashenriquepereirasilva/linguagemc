#include  <stdio.h>

int main(){
    // Declaração Da Variavel Idade
    int idade = 18;
    // Declaração de Ponteiro
    int *p_idade = &idade;
    printf("A idade é %d e está em %p e %p com o valor %d\n",idade,&idade,p_idade, *p_idade);



    return 0;

}