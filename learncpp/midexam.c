#include <stdio.h>
#include <string.h>

// User-defined function to check and print if search_str is in product_name
void find_product(char product_name[], char search_str[])
{
    // strstr returns a pointer to the first occurrence of search_str in product_name
    if (strstr(product_name, search_str) != NULL)
    {
        printf("%s\n", product_name);
    }
}

int main()
{
    char search_str[10];
    int n;

    // Input the 3-character string to search for
    if (scanf("%s", search_str) != 1)
        return 0;

    // Input the number of products
    if (scanf("%d", &n) != 1)
        return 0;

    char product_name[100];

    // Loop to input each product name and check it
    for (int i = 0; i < n; i++)
    {
        scanf("%s", product_name);
        find_product(product_name, search_str);
    }

    return 0;
}