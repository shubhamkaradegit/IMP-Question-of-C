#include<stdio.h>

int main(){
int n;
printf("Enter the  no. of rows : ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        // print 1 if the column index is odd
        
        if(j % 2 == 1){
            printf("1");
        }else{
            printf("0");
        }
    }
    printf("\n");
}


return 0;
}