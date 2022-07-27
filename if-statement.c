#include<stdio.h>

int main(){
    double quantity, rate, amount;

    printf("Enter the quantity of items: ");
    scanf("%lf", &quantity);
    
    printf("Enter the rate per item: ");
    scanf("%lf", &rate);

    amount = quantity * rate;

    // Simple if statement
    if (amount > 500)
     amount *= 0.1;

    printf("The net price is: %lf\n",amount);
    return (0);
    
}