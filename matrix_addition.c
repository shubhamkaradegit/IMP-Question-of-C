#include<stdio.h>

int main(){
int a[10][10],arow ,acol;
printf("Enter the rows and columns of matrix A : ");
scanf("%d %d",&arow,&acol);

printf("Enter the elements of matrix A : \n");
for(int i=0;i<arow;i++){
    for(int j=0;j<acol;j++){
        printf("Number [%d][%d] : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}

printf("Matrix A  : \n");
for(int i=0;i<arow;i++){
    for(int j=0;j<acol;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}


int b[10][10],brow ,bcol;
printf("Enter the rows and columns of matrix B : ");
scanf("%d %d",&brow,&bcol);

if(arow == brow && acol == bcol){

printf("Enter the elements of matrix B : \n");
for(int i=0;i<brow;i++){
    for(int j=0;j<bcol;j++){
        printf("Number [%d][%d] : ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}

printf("Matrix B  : \n");
for(int i=0;i<brow;i++){
    for(int j=0;j<bcol;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
}else{
    printf("Enter valid row & col to add matrices!!!");
}


int c[10][10];
for(int i=0;i<arow;i++){
    for(int j=0;j<bcol;j++){
        c[i][j] = a[i][j] + b[i][j];
      
    }
}

printf("Added matrix is : \n");
for(int i=0;i<arow;i++){
    for(int j=0;j<bcol;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0;
}