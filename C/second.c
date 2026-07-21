#include<stdio.h>
int main(){
    int year, last;
    scanf("%d", &year);
    last = year % 100;
    printf("%02d\n", last);
    return 0;
}