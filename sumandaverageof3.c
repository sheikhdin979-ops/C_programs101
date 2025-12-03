#include <stdio.h>
int main()
{
    int a, b, c, sum;
    float average;
    printf("Enter the first number =");
    scanf("%d", &a);
    printf("Enter the second sumber =");
    scanf("%d", &b);
    printf("Enter the third number =");
    scanf("%d", &c);

    sum = a + b + c;
    printf("sum = %d\n", sum);
    printf("average = %.2f\n", sum / 3.0);
    return 0;
}