#include <stdio.h>

int main()
{
    float investmentAmount, buyPrice, currentPrice, sellingPrice, profit, coinsBought;

    // Taking user inputs
    printf("Enter your investment amount in dollars: ");
    scanf("%f", &investmentAmount);

    printf("Enter the coin price while buying: ");
    scanf("%f", &buyPrice);

    printf("Enter the current coin price: ");
    scanf("%f", &currentPrice);

    // Calculations
    coinsBought = investmentAmount / buyPrice; // Coins bought
    sellingPrice = coinsBought * currentPrice; // Selling price
    profit = sellingPrice - investmentAmount;  // Total profit

    // Output the results
    printf("\nCoins Bought: %.6f\n", coinsBought);  // Shows coins bought
    printf("Selling Price: $%.2f\n", sellingPrice); // Shows selling price
    printf("Total Profit: $%.2f\n", profit);        // Shows total profit

    return 0;
}
