#include<stdio.h>
#include<stdlib.h>
int main(){
int size;
printf("enter the size of the array  : ");
scanf("%d",&size);

int *arr = (int *)malloc(size * sizeof(int));

if(arr == NULL){
    printf("Memory allocation Invalid!!");
    return 1;
}

printf("Enter the elements of the array : ");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

printf("Array elements. \n");
for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
}
printf("\n");

free(arr);
return 0;
}