#include<stdio.h>

int main(){
    int count = 1;
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count <= n)
    {
        printf("The following is an outline of values of n: ");
        printf("%d", count);
        count += 1;
    }
    
    return (0);
    
}