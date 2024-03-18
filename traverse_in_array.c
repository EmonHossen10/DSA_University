#include <stdio.h>
int main()
{

    int arr[10], i, size;

    printf("Enter the size of array : \n");
    scanf("%d", &size);

    printf("Enter the Your  of array : \n");

    for (i = 0; i < size; i++)
    {
        printf("Array[%d]= ", i);
        scanf(" %d", &arr[i]);
    }

    printf("\nAfter traverse array :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
