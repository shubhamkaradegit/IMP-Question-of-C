#include<stdio.h>
#include<math.h>
int main(){
int num,temp,remainder,n=0;
float result = 0.0;
printf("Enter a number : ");
scanf("%d",&num);

temp =num;
while (temp != 0)
{
    temp /= 10;
    n++;
}

temp =num;
while (temp != 0)
{
    remainder = temp % 10;
    result += pow(remainder,n);
    temp /= 10;
}

if((int)result == num){
    printf("%d is Armstrong number.",num);
}else{
    printf("%d is not Armstrong number.",num);
}
return 0;
}