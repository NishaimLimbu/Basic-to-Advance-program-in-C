// WAP to swap two number without using third variable.

#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}