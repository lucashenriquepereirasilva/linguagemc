#include <stdio.h>
#include "../lib/ita.h"

int main(){
    float sal;
    printf("Digite o salario do funcionario\n");
    scanf("%f",&sal);
    reajuste(sal);

    return 0;
}