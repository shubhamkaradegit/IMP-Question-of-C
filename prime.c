#include<stdio.h>

int main(){
int is_prime;
printf("Prime numbers between 100 to 500 are : ");
for(int i=100;i<=500;i++){
    is_prime = 1;
    for(int j=2;j*j<=i;j++){  //check up to square root of i because factors repeat after square root
        if(i %j == 0){
            is_prime = 0;
            break;
        }

    }
        if(is_prime){
            printf("%d\t",i);
        }
    
    
}
printf("\n");
return 0;
}