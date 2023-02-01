#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("You are about to enter a number followed by an operator followed by another number\n");
    printf("Enter the first operand: ");
    float operand1;
    scanf("%f", &operand1);
    char junk;
    scanf("%c", &junk); //just to eat up the return left in the previous buffer
    printf("Enter a +, -, *, or / as the operator: ");
    char oper;
    scanf("%c", &oper);
    printf("Enter the second operand: ");
    float operand2;
    scanf("%f", &operand2);

    float answer;
    if (oper == '+')
    {
        answer = operand1 + operand2;
        printf("%f %c %f = %f\n", operand1, oper, operand2, answer);
    }
    else if (oper == '-')
    {
        answer = operand1 - operand2;
        printf("%f %c %f = %f\n", operand1, oper, operand2, answer);
    }
    else if (oper == '*')
    {
        answer = operand1 * operand2;
        printf("%f %c %f = %f\n", operand1, oper, operand2, answer);
    }
    else if (oper == '/')
    {
        if (operand2 == 0)
        {
            printf("Operand 2 cannot be zero\n");
        }
        else
        {
            answer = operand1 / operand2;
            printf("%f %c %f = %f\n", operand1, oper, operand2, answer);
        }
    }
    else
    {
        printf("%c is not a valid operator\n", oper);
    }
    return 0;
}