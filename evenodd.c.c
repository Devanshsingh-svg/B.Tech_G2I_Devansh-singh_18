#include <stdio.h>

int main() {
    int n, sum_even = 0, sum_odd = 0;

    printf("Enter an odd number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Number is not odd. Please enter an odd number.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    printf("Sum of even numbers up to %d: %d\n", n, sum_even);
    printf("Sum of odd numbers up to %d: %d\n", n, sum_odd);

    return 0;
}