#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    long long result;
    long long num;
    int first = 1;

    while (scanf("%lld", &num) == 1) {
        if (first) {
            result = num;
            first = 0;
        } else {
            result = lcm(result, num);
        }
    }

    if (!first) {
        printf("%lld\n", result);
    }

    return 0;
    
    //вихід через ESC 
}