#include<stdio.h>

int main(){
    int weekday;

    printf("Enter a weekday: Sunday - 0, Monday - 1, .. ");
    scanf("%d", &weekday);

    switch (weekday)
    {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;   
    default:
        printf("Invalid Weekday\n");
        break;
    }
}