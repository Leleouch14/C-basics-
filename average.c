#include <stdio.h>

int main() {
    int num1, num2, num3;
    const float entries = 3.00;
    float num_avg;
    printf("enter 3 integers seperated by space\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    num_avg=(num1+num2+num3)/entries;
    printf("the average is: %f", num_avg);
}