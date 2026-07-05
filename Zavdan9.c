#include <stdio.h>

long long minSteps(long long x, long long y) {
    long long d = y - x;
    if (d == 0) return 0;

    long long n = 0;
    long long M = 0;
    while (M < d) {
        n++;
        long long k = n / 2;
        if (n % 2 == 0) {
            M = k * (k + 1);
        } else {
            M = (k + 1) * (k + 1);
        }
    }
    return n;
}

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    printf("%lld\n", minSteps(x, y));

    return 0;
}