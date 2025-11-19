#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    
    char items[3][3][20] = {
        {"Spring Rolls", "Garlic Bread", "Fries"},
        {"Burger", "Pizza", "Pasta"},
        {"Ice Cream", "Cake", "Pudding"}
    };

    float prices[3][3] = {
        {6.50, 8.00, 4.99},
        {12.00, 15.50, 13.00},
        {5.00, 7.50, 9.50}
    };

    int i, j;

  
    printf("Restaurant Menu:\n");
    printf("-----------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("\n%s:\n", categories[i]);
        printf("-----------------------------------\n");
        for (j = 0; j < 3; j++) {
            printf("%-15s  $%.2f\n", items[i][j], prices[i][j]);
        }
    }

    printf("\nBudget-Friendly Items (Under $10):\n");
    printf("-----------------------------------\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (prices[i][j] < 10) {
                printf("%-15s  $%.2f   (%s)\n", items[i][j], prices[i][j], categories[i]);
            }
        }
    }

    return 0;
}

