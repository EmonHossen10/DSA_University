#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2, i, j, k, sum = 0;

    printf("Enter your first matrix row and column :");
    scanf("%d%d", &r1, &c1);

    printf("Enter your second matrix row and column :");
    scanf("%d%d", &r2, &c2);
    while (c1 != r2)
    {
        printf("ERROR !!!!!!!!!!!!\n");

        printf("Enter your first matrix row and column :");
        scanf("%d%d", &r1, &c1);
        printf("Enter your second matrix row and column :");
        scanf("%d%d", &r2, &c2);
    }
    // here first matrix input :
    printf("Enter Your First matrix : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("first[%d][%d]=", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\n");
    // here second matrix input :

    printf("Enter Your second matrix : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("second[%d][%d]=", i, j);
            scanf("%d", &second[i][j]);
        }
    }
    printf("\n");
    // here multiply matrix:
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    // printing first matrix :
    printf("First matrix : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }
    // printing second matrix
    printf("Second matrix : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }
    // printing result martix :
    printf("\nHere result of the multipication : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
