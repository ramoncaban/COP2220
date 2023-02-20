#include <stdio.h>

int main()
{
    // Declare integer variables
    int studentID = 0;
    int lowStudentID = 0;
    int highStudentID = 0;
    int numStudents = 0;

    // Declare float variables
    float gpa, lowGPA = 10, highGPA = -1, avgGPA, totGPA = 0;

    // Get data from the user
    printf("Enter a student ID or a non-positive number to quit entering data:\n");
    scanf("%d", &studentID);

    while (studentID > 0)
    {
        // Get the GPA from the user
        printf("Enter a GPA between 0 and 4 inclusive:\n");
        scanf("%f", &gpa);

        if (gpa >= 0 && gpa <= 4)
        {
            // Update variables if the GPA is valid
            numStudents++;
            totGPA += gpa;
            if (gpa > highGPA)
            {
                highGPA = gpa;
                highStudentID = studentID;
            }
            if (gpa < lowGPA)
            {
                lowGPA = gpa;
                lowStudentID = studentID;
            }
        }
        else
        {
            printf("The GPA is out of range and will be skipped.\n");
        }

        // Get the next student ID from the user
        printf("Enter a student ID or a non-positive number to quit entering data:\n");
        scanf("%d", &studentID);
    }

    // Print the results
    if (numStudents == 0)
    {
        printf("No data was entered.\n");
    }
    else
    {
        avgGPA = totGPA / numStudents;
        printf("Number of students: %d\n", numStudents);
        printf("Average GPA: %.2f\n", avgGPA);
        printf("Student ID with highest GPA: %d\n", highStudentID);
        printf("Highest GPA: %.2f\n", highGPA);
        printf("Student ID with lowest GPA: %d\n", lowStudentID);
        printf("Lowest GPA: %.2f\n", lowGPA);
    }

    return 0;
}
