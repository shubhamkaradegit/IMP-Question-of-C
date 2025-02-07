#include<stdio.h>
int stringLength(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
char str[100] = "Hello World";
printf("Length of string : %d\n",stringLength(str));

return 0;
}