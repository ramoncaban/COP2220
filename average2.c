#include <stdio.h>

int main(int argc, char *argv[])
{
    double grade1 = 0;
    printf("Enter the value for grade 1: ");
    scanf("%lf", &grade1);
    double grade2 = 0;
    printf("Enter the value for grade 2: ");
    scanf("%lf", &grade2);
    double grade3 = 0;
    printf("Enter the value for grade 3: ");
    scanf("%lf", &grade3);
    double avg = 0;
    avg = (grade1 + grade2 + grade3) / 3;
    printf("Average grade is: %.2lf\n", avg);

    return 0;
}