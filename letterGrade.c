#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("Enter the student's average: ");
    double avg;
    scanf("%lf", &avg);
    if (avg > 100)
    {
        printf("Out of range\n");
    }
    else if (avg >= 90)
    {
        printf("You got an A\n");
    }
    else if (avg >= 80)
    {
        printf("You got a B\n");
    }
    else if (avg >= 70)
    {
        printf("You got a C\n");
    }
    else if (avg >= 60)
    {
        printf("You got a D\n");
    }
    else if (avg >= 0)
    {
        printf("Unfortunately, you got an F\n");
    }
    else
    {
        printf("Out of range\n");
    }
    return 0;
}