#include <stdio.h>

int main()
{
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double diameter = 2 * radius;
    double circumference = 3.14159 * diameter;
    double area = 3.14159 * radius * radius;

    printf("Diameter of the circle is %.1lf\n", diameter);
    printf("Circumference of the circle is %.1lf\n", circumference);
    printf("Area of the circle is %.1lf\n", area);

    return 0;
}
