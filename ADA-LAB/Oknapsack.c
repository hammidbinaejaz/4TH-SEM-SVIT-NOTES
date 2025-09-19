#include <stdio.h>

// Max function
int max(int a, int b) 
{
    return (a > b) ? a : b;
}

// Recursive Knapsack function
int knapsack(int w[], int p[], int n, int m) 
{
    if (n == 0 || m == 0)
        return 0;

    if (w[n - 1] > m)
        return knapsack(w, p, n - 1, m);

    return max(
            knapsack(w, p, n - 1, m),
        p[n - 1] + knapsack(w, p, n - 1, m - w[n - 1])
    );
}

int main() 
{
    int n, m, w[10], p[10];

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights and profits:\n");
    for (int i = 0; i < n; i++)
        scanf("%d%d", &w[i], &p[i]);

    printf("Enter capacity of knapsack: ");
    scanf("%d", &m);

    int result = knapsack(w, p, n, m);
    printf("Maximum value that can be put in knapsack = %d\n", result);

    return 0;
}
