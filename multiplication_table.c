#include<stdio.h>

int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);

for(int i=1;i<=10;i++){
    printf("8 * %d = %d\n",i,i*n);
}
return 0;
}