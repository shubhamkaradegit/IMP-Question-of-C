#include<stdio.h>

int main(){
int n,arr[100],count = 0;
printf("Enter the number of elements : ");
scanf("%d",&n);

printf("Enter the elements : \n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i] == arr[j]){
            count++;
            printf("Dupliate numbers : %d\t",arr[i]);
            break;
        }
    }
}
printf("Total duplicate elements : %d\n",count);
return 0;
}