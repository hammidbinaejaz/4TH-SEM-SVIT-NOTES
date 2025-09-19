#include <stdio.h>

void prim(int cost[10][10], int n) 
{
    int d[10], p[10], s[10] = {0};
    int i, j, u = 0, v, min;

    for(i = 0; i < n; i++) 
    {
        d[i] = 999;
        p[i] = -1;
    }

    d[0] = 0;

    for(i = 0; i < n; i++) 
    {
        min = 999;
        for(j = 0; j < n; j++)
            if(!s[j] && d[j] < min)
                min = d[u = j];

        s[u] = 1;

        for(v = 0; v < n; v++) 
        {
            // 💡 Core condition (your format)
            if(!s[v] && cost[u][v] < d[v]) 
            {
                d[v] = cost[u][v];
                p[v] = u;
            }
        }
    }

    int total = 0;
    printf("Edge  Weight\n");
    for(i = 1; i < n; i++) 
    {
        printf("%d - %d  %d\n", p[i], i, cost[i][p[i]]);
        total += cost[i][p[i]];
    }
    printf("Total cost = %d\n", total);
}

int main() 
{
    int n, cost[10][10], i, j;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix (999 = no edge):\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    prim(cost, n);
    return 0;
}
