#include<stdio.h>

int main(){
char ch[100];
printf("Enter a character : ");
scanf("%c",&ch);

for(int i = 97;i<=122;i++){
    printf("%c = %d\n",i,i);
    // printf("%d",i);
    // if(){
    //     printf("%d",i);
    // }
}


return 0;
}