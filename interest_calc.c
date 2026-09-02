#include <stdio.h>
int main() {
    const float rate=3.50;
    int principal, time;
    float int_amt, total;
    printf("The constant rate per annum is: %f\n", rate);
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the time period in years: ");
    scanf("%d", &time);
    int_amt=(principal*(rate/100));
    total = principal+(int_amt*time);
    printf("\ninterest amount per annum is: %f", int_amt);
    printf("\ntotal to be paid: %f", total);
}