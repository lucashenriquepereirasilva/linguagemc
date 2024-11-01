#include <stdio.h>

int main(){
    int n[] = {13,8,23,95,47,14,10,45,165};
    int rs;
    for(p = 0 ; p <= 8 ; p++){

        if(n[p] % 2 == 0){
            printf("%d\n",n[p]);
        }
        

    }
    return 0;
}