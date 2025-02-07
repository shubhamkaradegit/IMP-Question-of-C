// #include<stdio.h>

// int main(){
// int n,num[100],largest = 0,second_largest = 0;
// printf("Enter a number of elements : ");
// scanf("%d",&n);

// if(n<2){
//     printf("array must have at least two elements!!!");
// }
// for(int i=1;i<=n;i++){
//     printf("Enter number %d : ",i);
//     scanf("%d",&num[i]);
 
    

// }


// for(int i=1;i<=n;i++){
//     if(num[i]  >largest){
//         second_largest = largest;    //important statement 
//         largest = num[i];
//     }else if(num[i] > second_largest && num[i] != largest){
//         second_largest = num[i];
//     }
// }

// printf("largest no. is : %d\n",largest);
// printf("second largest no. is : %d\n",second_largest);
// return 0;
// }


#include<stdio.h>

int main(){
int max1,max2,a[100],n;
printf("Enter a number of elements : ");
scanf("%d",&n);

if(n<2){
    printf("array must have at least two elements!!!");
}
for(int i=1;i<=n;i++){
    printf("Enter number %d : ",i);
    scanf("%d",&a[i]);
 
    if(a[0] > a[1]){
        max1 = a[0];
        max2 = a[1];
    }else{
        max1 = a[1];
        max2 = a[2];
    }

    for(int i = 3;i<=n;i++){
        if(a[i] > max1){
            max2 = max1;
            max1 =a[i];
        }else if(a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }

}

printf("max2 : %d",max2);
return 0;
}