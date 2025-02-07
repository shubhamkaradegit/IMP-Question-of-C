#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int length,is_palindrome =1;

printf("Enter the string : ");
scanf("%s",str);

length = strlen(str);

for(int i=0;i<length/2;i++){
    if(str[i] != str[length -i -1]){
        is_palindrome = 0;
        break;
    }
}
    if(is_palindrome){
        printf("%s is palindrome.",str);
    }else{
        printf("%s is not palindrome.",str);
    }

return 0;
}