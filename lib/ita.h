
int comparador(int num1, int num2){
int m;
if(num2 > num1){
    m = num1;

}
else{
    m = num2;

}

return m;


}
char genero(char letra){
    if(letra == 'm' || letra == 'm'){
        printf("Masculino\n");

    }
    else if (letra == 'f' || letra == 'f'){
        printf("Feminino\n");
    }
    else{
        printf("tu é branco, so tem dois generos\nll");
    }
}


// void vogal(char letra){
    //if(letra== 'a'){
    //   printf("A é vogal");
    ///}
    //else if(letra== 'e'){
     //   printf("E é vogal");
   // }

    // else if(letra== 'i'){
    //    printf("i é vogal");
   // }
    
    //else if(letra== 'o'){
    //    printf("O é vogal");
    //}

     //else if(letra== 'U'){
    //    printf("U é vogal");
   // }
    // else{
    //    print("%c é consoante",letra);
  //  }

//}
// void vogal(char letra){
    //if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        //   print("A letra digitada é  uma vogal");
     //}
    //else{
        //printf("A letra digitada é consoante");
    //}
   
//}

void reajuste(float salarío){

    float valor_aumento;
    float novo_salario;
    if(salarío <= 280){
        valor_aumento = salarío * (20.0 / 100);
        novo_salario = salarío + valor_aumento;
        printf("O salario antigo é %f e foi reajustado em 20%. o valor de aumento é %f\n",salarío,valor_aumento,novo_salario);
        novo_salario;
    }
    
    // else if(salarío > 280 & salario <== 700)
    else if(salarío <= 700){
        valor_aumento = salarío * ( 15.0/ 100);
        novo_salario = salarío + valor_aumento;
        printf("O salario antigo é %f e foi reajustado em 20%. o valor de aumento é %f\n",salarío,valor_aumento,novo_salario);
        novo_salario;
    
    }
    
    else if(salarío <= 1500){
        valor_aumento = salarío * (10.0 / 100);
        novo_salario = salarío + valor_aumento;
        printf("O salario antigo é %f e foi reajustado em 20%. o valor de aumento é %f\n",salarío,valor_aumento,novo_salario);
        novo_salario;
    }
    
      else{
        valor_aumento = salarío * (5.0 / 100);
        novo_salario = salarío + valor_aumento;
        printf("O salario antigo é %f e foi reajustado em 20%. o valor de aumento é %f\n",salarío,valor_aumento,novo_salario);
        novo_salario;
      }
       
    }
    
