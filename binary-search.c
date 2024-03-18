#include <stdio.h>
int main()
{

    int arr[100], i, n, item;

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter your searching item : ");
    scanf("%d", &item);
    int left = 0, right = n - 1, mid, loc = -1;

    // searching here

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == item)
        {
            printf("Item is found at index %d", mid);
            loc = mid;
            return 0;
        }

        else if (arr[mid] < item)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (loc == -1)
    {
        printf("Item not found");
    }

    return 0;
}
