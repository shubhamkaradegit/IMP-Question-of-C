#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements  : ");
    scanf("%d", &n);

    float arr[n];
    float sum = 0.0;

    printf("Enter %d Elements : \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;

    printf("The average of the entered element is : %.2f", average);
    return 0;
}