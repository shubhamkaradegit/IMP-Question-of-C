#include<stdio.h>
int sortArray(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){

        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        }
        
    }
}
}
int main(){
int n;
printf("Enter the number  : ");
scanf("%d",&n);

int arr[n];
printf("Enter the elements  : ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}


sortArray(arr, n );
printf("Sorted array : \n");
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}

return 0;
}