#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 8

// Function declarations
void displayOwnerMenu();
void displayCustomerMenu();
void displayDrinks(char drinks[][20], int stock[], int size, double prices[]);
void ownerOperations(char drinks[][20], int stock[], int max_stock[], int *size, double prices[]);
void customerOperations(char drinks[][20], int stock[], int size, double prices[], double *total_earnings);

int main()
{
    // Initialize arrays for drinks, stock, maximum stock, and prices
    char drinks[MAX_ITEMS][20] = {"Pepsi", "Water", "Coke", "Mojo", "Coffee"};
    int stock[MAX_ITEMS] = {20, 20, 20, 30, 15};
    int max_stock[MAX_ITEMS] = {20, 20, 20, 30, 15};
    double prices[MAX_ITEMS] = {1.50, 1.00, 1.50, 2.00, 1.00};
    int size = 5;
    double total_earnings = 0.0;

    int choice;
    while (1)
    {
        // Display main menu
        printf("Vending Machine Menu:\n");
        printf("1. Owner\n");
        printf("2. Customer\n");
        printf("3. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            // Owner operations
            ownerOperations(drinks, stock, max_stock, &size, prices);
            break;
        case 2:
            // Customer operations
            customerOperations(drinks, stock, size, prices, &total_earnings);
            break;
        case 3:
            // Exit program
            printf("Exiting...\n");
            printf("Total earnings: $%.2f\n", total_earnings);
            return 0;
        default:
            // Invalid choice
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Display owner menu
void displayOwnerMenu()
{
    printf("Owner Operations:\n");
    printf("1. Add Drink\n");
    printf("2. Restock Drink\n");
    printf("3. Display Stock\n");
    printf("4. Exit to Main Menu\n");
}

// Display customer menu
void displayCustomerMenu()
{
    printf("Hello There!!\n");
    printf("Select the drink you want to buy:\n");
}

// Display drinks with stock and prices
void displayDrinks(char drinks[][20], int stock[], int size, double prices[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d. %s (%d available) - $%.2f\n", i + 1, drinks[i], stock[i], prices[i]);
    }
    printf("\n");
}

// Owner operations
void ownerOperations(char drinks[][20], int stock[], int max_stock[], int *size, double prices[])
{
    int choice;
    while (1)
    {
        // Display owner menu
        displayOwnerMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4)
        {
            // Exit to main menu
            break;
        }

        switch (choice)
        {
        case 1: // Add a new drink
            if (*size >= MAX_ITEMS)
            {
                printf("Cannot add more drinks. Maximum capacity reached.\n");
                break;
            }
            printf("Enter the name of the new drink: ");
            scanf("%19s", drinks[*size]);
            printf("Enter the quantity: ");
            scanf("%d", &stock[*size]);
            max_stock[*size] = stock[*size];
            printf("Enter the price: ");
            scanf("%lf", &prices[*size]);
            (*size)++;
            printf("%s added with quantity %d.\n", drinks[*size - 1], stock[*size - 1]);
            break;

        case 2: // Restock a drink
            displayDrinks(drinks, stock, *size, prices);
            int drinkIndex, quantity;
            printf("Enter the number of the drink to restock: ");
            scanf("%d", &drinkIndex);
            if (drinkIndex < 1 || drinkIndex > *size)
            {
                printf("Invalid choice.\n");
                break;
            }
            printf("Enter the quantity to add: ");
            scanf("%d", &quantity);
            int index = drinkIndex - 1;
            if (stock[index] + quantity > max_stock[index])
            {
                printf("Cannot add more than the maximum stock of %d.\n", max_stock[index]);
                break;
            }
            stock[index] += quantity;
            printf("Stock updated.\n");
            break;

        case 3: // Display stock
            displayDrinks(drinks, stock, *size, prices);
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

// Customer operations
void customerOperations(char drinks[][20], int stock[], int size, double prices[], double *total_earnings)
{
    displayCustomerMenu();
    displayDrinks(drinks, stock, size, prices);
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > size)
    {
        printf("Invalid choice.\n");
        return;
    }

    if (stock[choice - 1] > 0)
    {
        double payment;
        printf("You have selected %s. Please enter the payment: $", drinks[choice - 1]);
        scanf("%lf", &payment);

        if (payment < prices[choice - 1])
        {
            printf("Insufficient payment. Please try again.\n");
            return;
        }

        stock[choice - 1]--;
        *total_earnings += prices[choice - 1];

        double change = payment - prices[choice - 1];
        printf("Your change is: $%.2f\n", change);

        int coins[] = {50, 20, 10, 5, 2};
        int count[5] = {0, 0, 0, 0, 0};

        for (int i = 0; i < 5; i++)
        {
            while (change >= coins[i])
            {
                change -= coins[i];
                count[i]++;
            }
        }

        printf("Your change is:\n");
        for (int i = 0; i < 5; i++)
        {
            if (count[i] > 0)
            {
                printf("%d x $%d\n", count[i], coins[i]);
            }
        }
    }
    else
    {
        printf("Sorry, %s is out of stock.\n", drinks[choice - 1]);
    }
}