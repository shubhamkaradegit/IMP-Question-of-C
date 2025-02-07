#include<stdio.h>

int main(){
char str[100];
printf("Enter the string : ");


gets(str);

printf("The string you entered is : %s\t",str);
return 0;
}