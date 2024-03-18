#include <stdio.h>
int main()
{

    int arr[100], i, n, p;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Delete position : ");
    scanf("%d", &p);
    printf("Before deletion : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    // ******main work deletion*****
    for (i = p; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("\nAfter deletion : \n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
