// WAP to print the all even number from 1 to n using while loop.

#include <stdio.h>
int main() {
    int n, i = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    while (i <= n) {
        printf("%d\n", i);
        i += 2; // Increment by 2 to get the next even number
    }

    return 0;
}
