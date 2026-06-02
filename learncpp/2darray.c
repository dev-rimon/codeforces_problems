#include <stdio.h>

int main()
{
    int n;

    // Input the number of items
    if (scanf("%d", &n) != 1)
        return 0;

    // Define 2D array: n rows and 3 columns (ID, Quantity, Year)
    int inventory[n][3];

    // Input data into the 2D array
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &inventory[i][0], &inventory[i][1], &inventory[i][2]);
    }

    // Print the inventory table
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", inventory[i][0], inventory[i][1], inventory[i][2]);
    }

    // Logic to find the oldest item (minimum year)
    int oldestIndex = 0;
    for (int i = 1; i < n; i++)
    {
        // Compare the years (index 2 of each row)
        if (inventory[i][2] < inventory[oldestIndex][2])
        {
            oldestIndex = i;
        }
    }

    // Print the oldest item's details
    printf("Oldest item: %d %d %d\n",
           inventory[oldestIndex][0],
           inventory[oldestIndex][1],
           inventory[oldestIndex][2]);

    return 0;
}
// #include <stdio.h>
// #include <string.h>

// // User-defined function to find and print matching product names
// void findProducts(char products[][50], int n, char search[]) {
//     for (int i = 0; i < n; i++) {
//         // strstr returns a non-null pointer if search is found in products[i]
//         if (strstr(products[i], search) != NULL) {
//             printf("%s\n", products[i]);
//         }
//     }
// }

// int main() {
//     char search[4]; // 3 characters + null terminator
//     int n;

//     // Input the search string (3 characters)
//     scanf("%s", search);

//     // Input the number of products
//     scanf("%d", &n);

//     char products[n][50];

//     // Input each product name
//     for (int i = 0; i < n; i++) {
//         scanf("%s", products[i]);
//     }

//     // Call the function
//     findProducts(products, n, search);

//     return 0;
// }