#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    printf("Enter c = ");
    scanf("%d", &c);
    printf("Enter d = ");
    scanf("%d", &d);

    printf("sum of a+b = %d\n", a + b);
    printf("sum of c+d = %d\n", c + d);
    printf("sum of d+a = %d\n", d + a);

    int x = a + b;
    int y = d + a;

    x += y;
    y = x - y;
    x = x - y;

    printf("After swapping a+b and d+a:\n");
    printf("a+b = %d\n", x);
    printf("d+a = %d\n", y);

    return 0;
}