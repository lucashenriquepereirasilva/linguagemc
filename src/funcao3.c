#include <stdio.h>
// o comando ../ faz a saída da pasta atual (src) e lib é a pasta onde esta o arquivo de cabecalho (calculos.h)
#include "../lib/calculos.h"
  
        int main(){
            int valores[] ={5,23,5,7,10,4,12,30};
            printf("o resultado da soma é %d\n",somaarray(valores,8));
            printf("o resultado da média é %d\n",mediaarray(valores,8));
            printf("Omaior valor é %d\n",maiorvalor(valores,8));
            return 0;
        }

