#include <stdio.h>

float power(float base, int ex);
float mypow(float base, int ex);

int main()
{
    float b;
    printf("Enter a base value or 0 to quit: ");
    scanf("%f", &b);

    while (b != 0)
    {
        int ex;
        printf("Enter an integer exponent: ");
        scanf("%d", &ex);

        float answer = power(b, ex);
        printf("%.5f raised to the power of %d is %.6f\n", b, ex, answer);

        printf("Enter a base value or 0 to quit: ");
        scanf("%f", &b);
    }

    return 0;
}

float power(float base, int ex)
{
    float answer;
    if (ex >= 0)
    {
        answer = mypow(base, ex);
    }
    else
    {
        answer = 1 / mypow(base, -ex);
    }
    return answer;
}

float mypow(float base, int ex)
{
    if (base == 0)
    {
        return 0;
    }
    if (ex == 0)
    {
        return 1;
    }
    int i;
    float prod = 1;
    for (i = 1; i <= ex; i++)
    {
        prod *= base;
    }
    return prod;
}
