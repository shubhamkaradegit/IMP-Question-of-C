#include<stdio.h>
#include<string.h>
int main(){
char str[] = "Hello World";
int vowels = 0,consolants = 0;
for(int i=0;str[i] != '\0';i++){
    char ch = tolower(str[i]);
    if(ch >= 'a' && ch <= 'z'){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowels++;
        }else{
            consolants++;
        }
    }
}
printf("Vowels : %d  , Consolants : %d\n",vowels,consolants);
return 0;
}