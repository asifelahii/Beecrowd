#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int m, a, b, c, mn; //mn = missing numbers
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        if (a == 0 || b == 0 || c == 0 || m % (a * b * c) != 0) {
            printf("-1\n");
        } else {
            long long int mn = m / (a * b * c);
            printf("%lld\n", mn);
        }
    }

    return 0;
}