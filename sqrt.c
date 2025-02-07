#include<stdio.h>
#include<math.h>
int main(){
float n , sqrt_n;
printf("Enter a number : ");
scanf("%f",&n);

if(n <0){
    printf("Invalid input.Number cannot be negative.");
}else{
    sqrt_n = sqrt(n);
}

printf("The square root of %.2f is : %.2f\n ",n,sqrt_n);
return 0;
}