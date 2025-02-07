#include<stdio.h>
#include<math.h>
int main(){
    int count = 0;
printf("prime no. between 1 to 500 are :  ");
for(int i=2;i<=500;i++){
    int is_prime = 1;
    for(int j=2 ; j<=sqrt(i);j++){
        if(i % j == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime){
        printf("%d\t",i);
        count++;
    }
}
    printf("\n");
    printf("Total prime no. are : %d",count);
    return 0;
}