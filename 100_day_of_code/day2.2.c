// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14159
int main()
{
    float area, circumference, radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of circle: %.2f\n", area);
    printf("Circumference of circle: %.2f\n", circumference);
    return 0;
}
