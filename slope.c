#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Enter the value for x1: ");
    float x1;
    scanf("%f", &x1);
    printf("Enter the valuye for y1: ");
    float y1;
    scanf("%f", &y1);

    printf("Enter the value for x2: ");
    float x2;
    scanff("%f", &x2);
    printf("Enter the value for y2: ");
    float y2;
    scanf("%f", &y2);

    if (x1 == x2)

        float slope = (y2 - y1) / (x2 - x1);
    printf("Slope of the line between the two points is: %.2f",
           slope);

    return 0;
}