#include <stdio.h>

struct student_info
{
    char name[100];
    int roll;
    float marks;
};

int main()
{

    struct student_info s1 = {"shubham" , 305, 99};
    struct student_info s2 = {"Rohan" , 302, 98};
    struct  student_info s3 = {"Aman" , 309, 97};
      

    printf("student info : %s\t %d\t %.2f\n",s1.name,s1.roll,s1.marks);
    printf("student info : %s\t %d\t %.2f\n",s2.name,s2.roll,s2.marks);
    printf("student info : %s\t %d\t %.2f\n",s3.name,s3.roll,s3.marks);
    
    return 0;
}