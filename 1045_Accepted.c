//Accepted
//Chat GPT
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // Sort the sides in descending order (a >= b >= c)
    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        double temp = b;
        b = c;
        c = temp;
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
