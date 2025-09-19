#include <stdio.h>
#define INF 99999  // A large number to represent infinity

void floyd(int dist[10][10], int n) 
{
    int i, j, k;
    for (k = 0; k < n; k++) 
    {            // pick every intermediate vertex
        for (i = 0; i < n; i++) 
        {        // source
            for (j = 0; j < n; j++) 
            {    // destination
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}

int main() 
{
    int n, i, j;
    int dist[10][10];

    printf("Enter number of vertices (max 10): ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (use 99999 for no edge):\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &dist[i][j]);

    floyd(dist, n);

    printf("All-Pairs Shortest Path Matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            if (dist[i][j] == INF)
                printf("INF ");
            else
                printf("%3d ", dist[i][j]);
        }
        printf("\n");
    }

    return 0;
}
