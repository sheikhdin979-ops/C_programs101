#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;   // get last digit and add to sum
        num /= 10;         // remove last digit`    
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}