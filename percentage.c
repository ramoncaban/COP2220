#include <stdio.h>

int main(int argc, char *argv[])
{
    int numBoys = 0;
    int numGirls = 0;
    printf("Enter the number of boys in the class: ");
    scanf("%d", &numBoys);
    printf("Enter the number of girls in the class: ");
    scanf("%d", &numGirls);

    int totalStudents = numBoys + numGirls;
    double percentBoys = (double)numBoys / totalStudents * 100;
    double percentGirls = (double)numGirls / totalStudents * 100;

    printf("Percent boys: %.1lf\n", percentBoys);
    printf("Percent girls: %.1lf\n", percentGirls);

    return 0;
}