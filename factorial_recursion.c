#include <stdio.h>
int fact(int n);
int main()
{
    int number;
    printf("Enter a number for factorial : \n");
    scanf("%d", &number);
    int result = fact(number);
    printf("The factorial of %d is = %d", number, result);
    return 0;
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
