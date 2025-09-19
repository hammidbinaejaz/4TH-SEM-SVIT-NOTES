#include <stdio.h>

int s[20], set[20], d, n, count = 0, flag = 0;

// Display the current subset
void display(int count) 
{
    printf("{ ");
    for (int i = 0; i < count; i++)
        printf("%d ", set[i]);
    printf("}\n");
}

// Recursive function to find subsets
void subset(int sum, int i) 
{
    if (sum == d) 
    {
        flag = 1;
        display(count);
        return;
    }
    if (sum > d || i >= n)
        return;

    // Include s[i] in the current subset
    set[count++] = s[i];
    subset(sum + s[i], i + 1);

    // Backtrack: remove last included element
    count--;
    subset(sum, i + 1);  // Exclude s[i]
}

int main() 
{
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the set of values: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);

    printf("Enter the desired sum: ");
    scanf("%d", &d);

    printf("The subsets are:\n");
    subset(0, 0);

    if (!flag)
        printf("No subset found.\n");

    return 0;
}
