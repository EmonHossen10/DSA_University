#include <stdio.h>
int main()
{

    // 12345
    // 123945
    int arr[100], n, p, value, i, j;

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position and value : \n");
    scanf("%d %d", &p, &value);

    printf("\nBefore Insertion : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    // ******************* main work of insertion **************

    for (i = n - 1; i >= p; i--)
    {
        // printf("\n%d\n",i );
        arr[i + 1] = arr[i];
    }
    arr[p] = value;

    printf("\nAfter Insertion : \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
