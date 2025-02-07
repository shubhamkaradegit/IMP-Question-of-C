#include<stdio.h>
int power(int x,int n){
    if( n == 0){
        return 1;
    }else{
        return x * power(x,n-1);
    }
}
int main(){
int x,n;
printf("Enter the value of x :  ");
scanf("%d",&x);

printf("Enter the value of n :  ");
scanf("%d",&n);

printf("%d raised to the power of %d is : %d",x,n,power(x,n));
return 0;
}