#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    long long a[31];
    a[1] = 2;
    if (p >= 2) a[2] = 4;

    for (int i = 3; i <= p; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    printf("%lld\n", a[p]);

    return 0;
}