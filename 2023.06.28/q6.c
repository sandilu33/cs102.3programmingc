#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    printf("%d raised to the power of %d is %lld\n", base, exponent, result);

    return 0;
}
