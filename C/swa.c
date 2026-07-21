#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    printf("Enter the value of c = "); 
    scanf("%d", &c);
    printf("Enter the value of d = ");
    scanf("%d", &d);
    printf("Enter the value of e = ");
    scanf("%d", &e);
    printf("Enter the value of f = ");
    scanf("%d", &f);
    int temp=c;
    c=a;
    int y = d;
    d = temp;
    temp = f;
    f = y;
    a = temp;
    printf("The value of a = %d\n", a);
    printf("The value of b = %d\n", b);
    printf("The value of c = %d\n", c);
    printf("The value of d = %d\n", d); 
    printf("The value of e = %d\n", e);
    printf("The value of f = %d\n", f);

    b+=e;
    e=b-e;
    b=b-e;
    printf("The value of b after swapping = %d\n", b);
    printf("The value of e after swapping = %d\n", e);
    return 0;
}   