/*
Name; Vincent ochieng Owigo 
Registration number ;PA106/G/28807/25
*/
#include <stdio.h>

int main() {
    float hours, rate, grossPay, taxes, netPay;

    // Request input from user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= 40)
        grossPay = hours * rate;
    else
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);

    // Calculate taxes
    if (grossPay <= 600)
        taxes = 0.15 * grossPay;
    else
        taxes = (0.15 * 600) + (0.20 * (grossPay - 600));

    // Calculate net pay
    netPay = grossPay - taxes;

    // Display results
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}