#include <stdio.h>
int main (){
    int placa;
    printf("Digíte o número final da placa do seu veículo e tecle enter\n");
    scanf("%d",&placa);
    

    if(placa ==1 || placa ==2) {
    printf("Este veiculo não pode circular de segunda-feira");
    }
  
    else if (placa==3 || placa==4){
         printf("Este veiculo não pode circular de terça-feira");

    }

     else if (placa==5 || placa==6){
             printf("Este veiculo não pode circular de quarta-feira");
     }

     else if (placa==7 || placa==8){
          printf("Este veiculo não pode circular de quinta-feira");
     }

     else if (placa==9 || placa==0){
        printf("Este veiculo não pode circular na sexta-feira");

     }

     else{
        printf("Número de placa invalido!");
     }

     printf("\n");

     return 0;
        
} 
             


         
    







