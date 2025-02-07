#include<stdio.h>

int main(){
 int n;
 float num,largest;
 printf("Enetr a number of elements : ");
 scanf("%d",&n);

 if(n <= 0){
    printf("Please Enter a positive no. of elements.");
    return 1;
 }

 printf("Enter number 1 : ");
 scanf("%f",&largest);

 for(int i=2;i<=n;i++){
    printf("Enter number %d : ",i);
    scanf("%f",&num);


    if(num > largest){
    largest = num;
    }

 }

 printf("largest number is : %.2f",largest);
return 0;
}