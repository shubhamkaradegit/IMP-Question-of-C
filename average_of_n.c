#include <stdio.h>

int main()
{
    int n, sum = 0;
    int num[100];
    float avg;

    printf("enter the numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("number is %d : ", i + 1);
        scanf("%d", &num[i]);

        sum += num[i];
        
    }
    printf("sum is : %d\n", sum);
    avg = sum / n;

    printf("Avg is : %.2f\n", avg);
    return 0;
}