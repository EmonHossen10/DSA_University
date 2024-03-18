#include <stdio.h>
int fibonacci(int a);
int main()
{

    int n;
    printf("Enter The range of fibonacci : ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The result of %dth of fibonacci is : %d", n, result);
    return 0;
}
int fibonacci(int a)
{
    if (a <= 1)
        return a;

    return fibonacci(a - 1) + fibonacci(a - 2);
}
