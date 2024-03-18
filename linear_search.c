#include <stdio.h>
int main()
{

    int arr[100], i, n, value, pos = -1;

    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter your searching value : ");
    scanf("%d", &value);

    // searching here
    for (i = 0; i < n; i++)
    {

        if (value == arr[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        printf("\nValue is not in the array!!!!!!!!!!!!");
    }
    if (pos >= 0)
    {
        printf("\nThe value %d found in position %d ", value, pos);
    }

    return 0;
}
