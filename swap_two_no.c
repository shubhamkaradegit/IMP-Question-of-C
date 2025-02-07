#include<stdio.h>
int swap(int *a,int *b){
  
   int t = *a;
    *a = *b ;
    *b = t;
}
int main(){
int num1,num2;
printf("Enter the two numbers : ");
scanf("%d %d",&num1,&num2);


printf("Swaping of number : ");
swap(&num1,&num2);
printf("%d %d",num1,num2);
return 0;
}