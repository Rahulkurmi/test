include <stdio.h>
int main()
{
    int num1, num2, min, hcf = 1;
    int i;
    printf("enter the number1 and number2:");
    scanf("%d%d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("the hcf is %d", hcf);
    return 0;
}

