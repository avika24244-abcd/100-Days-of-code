// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
int main()
{
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    // Simple interest calulate
    simple_interest = (principal * rate * time) / 100;
    // Compound interest calculate
    compound_interest = principal * ((1 + rate / 100), time) - principal;
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}