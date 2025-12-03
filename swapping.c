#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers :\n");
    printf("a - ");
    scanf("%d", &a);
    printf("b - ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
} 
