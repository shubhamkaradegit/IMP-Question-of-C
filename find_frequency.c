#include<stdio.h>
int  findFrequency(char str[],char ch){
    int count = 0;
    for(int i = 0;i<str[i] != '\0';i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}
int main(){
char str[] = "programming";
char ch = 'g';
printf("Frequency of %c : %d\n",ch,findFrequency(str,ch));
return 0;
}