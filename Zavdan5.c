#include <stdio.h>

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    long long mod = 12345;
    long long d0 = 1, d1 = 1, d2 = 0; // n=1

    for (int i = 2; i <= n; i++) {
        long long nd0 = (d0 + d1 + d2) % mod;
        long long nd1 = d0 % mod;
        long long nd2 = d1 % mod;
        d0 = nd0;
        d1 = nd1;
        d2 = nd2;
    }

    long long result = (d0 + d1 + d2) % mod;
    printf("Кількість шуканих послідовностей: %lld\n", result);

    return 0;
}