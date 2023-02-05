#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float temp, fahrenheit, celsius;
    printf("1) Convert from Celsius to Fahrenheit\n");
    printf("2) Convert from Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        fahrenheit = (9.0 / 5.0) * temp + 32;
        printf("The equivalent Fahrenheit temperature is: %.2f\n", fahrenheit);
    }
    else if (choice == 2)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        celsius = (5.0 / 9.0) * (temp - 32);
        printf("The equivalent Celsius temperature is: %.2f\n", celsius);
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;
}