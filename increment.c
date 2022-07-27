#include<stdio.h>

int main(){
    // Post-increment: increment after assignment
    int a = 10;
    int b;

    b = a++;
    printf("POST-INCREMENT\n");
    printf("a is %d\nb is %d\n\n", a, b);

    // Pre-increment: increment before assignment
    int c = 10;
    int d;

    d = ++c;
    printf("PRE-INCREMENT\n");
    printf("c is %d\nd is %d\n", c, d);
    return (0);
}