// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping without using a third variable
    a = a + b; // Step 1: Sum of both numbers is stored in 'a'
    b = a - b; // Step 2: Original value of 'a' is assigned to 'b'
    a = a - b; // Step 3: Original value of 'b' is assigned to 'a'
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}