#include<stdio.h>

int main(){
    // int age[4] = {22, 13, 15, 25};
    // printf("Age: %u\n", *age);
    int number = 25;
    int *p = &number;
    printf("The address of the number is: %p\n", p);
    printf("The value stored at p is: %d\n", *p);

    return (0);
}