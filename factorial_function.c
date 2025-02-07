#include<stdio.h>
int factorial(int n){
    if(n == 0){
        return 1;

    }else{
        return n  * factorial(n-1);
    }
}
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);

if( n < 0 ){
    printf("Factorial is not defined for negative number.");
}else{
    int fact = factorial(n);
    printf("Factorial of %d is : %d",n,fact);
}
return 0;
}