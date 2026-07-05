#include <stdio.h>

int main() {
    long long x1, y1, r1, x2, y2, r2;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2);

    long long d2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    long long sumR2 = (r1 + r2) * (r1 + r2);
    long long diffR2 = (r1 - r2) * (r1 - r2);

    int result;
    if (d2 == 0) {
        if (r1 == r2) {
            result = -1;
        } else {
            result = 0;
        }
    } else if (d2 > sumR2) {
        result = 0;
    } else if (d2 == sumR2) {
        result = 1;
    } else if (d2 < diffR2) {
        result = 0;
    } else if (d2 == diffR2) {
        result = 1;
    } else {
        result = 2;
    }

    printf("%d\n", result);

    return 0;
}