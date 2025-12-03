#include <stdio.h>
#include <string.h>

int main() {
    // Number of categories and items
    int categories = 3;
    int itemsPerCategory = 3;

    // Menu categories
    char categoryNames[3][20] = {"Appetizers", "Main Course", "Desserts"};

    // Menu items for each category
    char menuItems[3][3][30] = {
        {"Spring Rolls", "Garlic Bread", "Bruschetta"},   // Appetizers
        {"Grilled Chicken", "Pasta Alfredo", "Veg Burger"}, // Main Course
        {"Chocolate Cake", "Ice Cream", "Fruit Salad"}     // Desserts
    };

    // Prices for each item
    float prices[3][3] = {
        {5.5, 6.0, 7.0},   // Appetizers
        {12.0, 11.5, 9.5}, // Main Course
        {4.5, 3.5, 6.0}    // Desserts
    };

    printf("----- Welcome to Our Restaurant Menu -----\n\n");

    // Display the complete menu
    for(int i = 0; i < categories; i++) {
        printf("%s:\n", categoryNames[i]);
        printf("-------------------------------\n");
        for(int j = 0; j < itemsPerCategory; j++) {
            printf("%-20s $%.2f\n", menuItems[i][j], prices[i][j]);
        }
        printf("\n");
    }

    // Display budget-friendly items (price < $10)
    printf("---- Budget-Friendly Options (Under $10) ----\n");
    for(int i = 0; i < categories; i++) {
        for(int j = 0; j < itemsPerCategory; j++) {
            if(prices[i][j] < 10.0) {
                printf("%-20s (%s) $%.2f\n", menuItems[i][j], categoryNames[i], prices[i][j]);
            }
        }
    }

    return 0;
}



