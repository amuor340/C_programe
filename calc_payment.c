/* switch case */

/* Write a C program called “calc_payment” that calculates the total cost of items purchased at a shop.
Your program should:
Ask the user to enter the price of an item.
Ask the user to enter the quantity purchased.
Calculate the total cost.
Calculate a discount of 10% if the total cost is at least KSh 1,000.
Display the total cost, discount and final amount payable.

Example: If the price is KSh 250 and the quantity is 5, the total cost is KSh 1,250, the discount is KSh 125, and the final amount is KSh 1,125.
Use variables, arithmetic operators, scanf() and printf(). */
#include <stdio.h>

int main()
{
    //variable(s) to be used in the program
    int price, quantity;
    float cost, discount, amount;

    // to enter the price
    printf("Please Enter price: \n");
    scanf("%d", &price);

    // to enter the quantity
    printf("Please Enter quantity: \n");
    scanf("%d", &quantity);

    //cal cost
    cost= price * quantity;
    printf("\nCost: %f", cost);

    // to enter the discount
    if (cost>= 1000)
        discount = 0.1 * cost;
        printf("\nDiscount %f", discount);

    //cal amount
    amount = cost - discount;

    printf("\nYour amount is %f", amount);
    return 0;

}
