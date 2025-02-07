#include<stdio.h>
int is_prime(int n,int i){
    if(n <= 2){
        return (n == 2) ? 1 : 0;
    }
    if( n % i == 0){
        return 0;
    }
    if( i * i > n){
        return 1;
    }
    return is_prime(n, i+1);
}
int main(){
int number;
printf("Enter a number : ");
scanf("%d",&number);

if(is_prime(number,2)){
    printf("%d is a prime number.",number);
}else{
    printf("%d is not a prime number.",number);
}
return 0;
}