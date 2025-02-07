#include<stdio.h>
void searchElement(int arr[] , int size, int key){
 int found = 0;
 for(int i=0;i<size;i++){
    if(arr[i] == key){
        printf("Element %d is found at index %d\n",key,i);
        found = 1;
        break;
 }
}

if(!found){
    printf("Element %d is not found.",key);
}
}
int main(){
int size,key;
printf("Enter the number of element : ");
scanf("%d",&size);

int arr[size];
printf("Enter %d elements : ",size);
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

printf("Enter the element to search : ");
scanf("%d",&key);

searchElement(arr,size,key);
return 0;
}