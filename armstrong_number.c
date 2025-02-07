#include<stdio.h>
#include<math.h>

int main(){
int number,originalNumber,remainder,n=0;
float result = 0.0;
printf("Enter a number : ");
scanf("%d",&number);

originalNumber = number;

while(originalNumber !=  0){
    originalNumber /= 10;
    n++;
}

originalNumber = number;

while(originalNumber != 0){
    remainder = originalNumber % 10;
    result += pow(remainder,n);
    originalNumber /= 10;
}

if((int) result == number){
    printf("%d is an armstrong number.",number);
}else{
    printf("%d is not an armstrong number.",number);
}
return 0;
}

//ans no = 153 9474