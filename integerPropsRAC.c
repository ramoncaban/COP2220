#include <stdio.h>

int getUpperBound();
int isPrime(int);
int isPerfect(int);

int main()
{
    int upperBound = getUpperBound();
    int num;

    for (num = 2; num <= upperBound; num++)
    {
        if (isPrime(num))
        {
            printf("%d is a prime number.\n", num);
        }
        else if (isPerfect(num))
        {
            printf("%d is a perfect number.\n", num);
        }
    }

    return 0;
}

int getUpperBound()
{
    int upper;
    do
    {
        printf("Enter an integer between 2 and 1000: ");
        scanf("%d", &upper);
        if (upper < 2 || upper > 1000)
        {
            printf("Integer must be between 2 and 1000.\n");
        }
    } while (upper < 2 || upper > 1000);

    return upper;
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }

    int divisor;
    for (divisor = 2; divisor < num; divisor++)
    {
        if (num % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}

int isPerfect(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    int total = 1;
    int divisor;
    for (divisor = 2; divisor < num; divisor++)
    {
        if (num % divisor == 0)
        {
            total += divisor;
        }
    }

    if (total == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
