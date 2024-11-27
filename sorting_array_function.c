#include <stdio.h>
void sortArray(int arr[], int n);
int main()
{
    int n;
    printf("Enter the number of Elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d Elements : \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    printf("The sorted element in ascending order are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    return 0;
}

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}