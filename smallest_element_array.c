#include<stdio.h>

int main(){
int n;
printf("Enter the number of elements : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Number %d : ",i);
    scanf("%d",&arr[i]);
}

int smallest = arr[0];
for(int i = 0;i<n;i++){
    if(arr[i] < smallest){
        smallest = arr[i];
    }
}

printf("Smallest no. is : %d",smallest);                                                                                                
return 0;
}