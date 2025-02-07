#include<stdio.h>
int gcd(int a,int b);
int main(){
int num1,num2,result;
printf("Enter two numbers  : ");
scanf("%d %d",&num1 , &num2);

result = gcd(num1,num2);
printf("gcd is : %d",result);
return 0;
}


int gcd(int a,int b){
    if(b == 0){
        return a;
    }else{
        return (b , a%b);
    }
}