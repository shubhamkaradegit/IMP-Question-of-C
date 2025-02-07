#include<stdio.h>

int sortArray(int arr[] ,int n){
    for(int i = 1; i<=n-1;i++){
        for(int j = i+1;j<=n;j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main(){
int n,arr[100];
printf("Enter the number of elements  : ");
scanf("%d",&n);

for(int i = 1;i<=n;i++){
    printf("Number %d : ",i);
    scanf("%d",&arr[i]);

}
sortArray(arr,n);
    printf("Sorted array is : ");
for(int i=1;i<=n;i++){
    printf("%d\t",arr[i]);
}
return 0;
}