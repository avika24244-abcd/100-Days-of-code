// Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int n, num = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int num = 1; num <= n; num++)
    {
        num += num;
    }
    printf("Sum of the first %d natural numbers is: %d\n", n, num);
    return 0;
}