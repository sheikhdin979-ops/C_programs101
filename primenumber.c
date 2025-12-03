#include <stdio.h>
int main()
{
    int n, i;
    printf(" Enter the number of term = ");
    scanf("%d", &n);
    printf(" prime numbers are: ");
    for (i = 2; i <= n; i++)
    {
        int j, flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", i);
    }
    return 0;
}