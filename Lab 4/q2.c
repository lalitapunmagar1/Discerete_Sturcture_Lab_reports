/*Write a program to calculate bn mod  m.*/
#include <stdio.h>

unsigned long long power_mod(unsigned long long b, unsigned long long n, unsigned long long m)
{
    unsigned long long result = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = (result * b) % m;
        }
        b = (b * b) % m;
        n = n / 2;
    }

    return result;
}

int main()
{
    unsigned long long b, n, m;

    // Input base (b), exponent (n), and modulo (m)
    printf("Enter the base (b): ");
    scanf("%llu", &b);

    printf("Enter the exponent (n): ");
    scanf("%llu", &n);

    printf("Enter the modulo (m): ");
    scanf("%llu", &m);

    // Calculate and print the result
    unsigned long long result = power_mod(b, n, m);
    printf("%llu^%llu mod %llu = %llu\n", b, n, m, result);

    return 0;
}
