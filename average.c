#include <stdio.h>

int main(int argc, char *argv[])
{
    double grade1 = 100.0;
    double grade2 = 0.0;
    double grade3 = 100.0;
    double avg = 0;
    avg = (grade1 + grade2 + grade3) / 3;
    printf("Average grade is: %.2lf\n", avg);
    return 0;
}