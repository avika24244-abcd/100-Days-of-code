// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float celcius, farenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", farenheit);
    return 0;
}