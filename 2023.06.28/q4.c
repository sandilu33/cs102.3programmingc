#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;           \
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
