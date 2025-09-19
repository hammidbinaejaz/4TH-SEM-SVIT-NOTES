#include <stdio.h>
#define INF 9999

int main() {
    // Adjacency cost matrix
    int cost[5][5] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    int selected[5] = {1, 0, 0, 0, 0}, n = 5;
    int totalCost = 0;

    printf("Minimum Cost Spanning Tree (Prim's Algorithm):\n");
    printf("Edge   : Cost\n");

    for (int edges = 0; edges < n - 1; edges++) {
        int min = INF, x = -1, y = -1;

        for (int i = 0; i < n; i++) {
            if (selected[i]) {
                for (int j = 0; j < n; j++) {
                    if (!selected[j] && cost[i][j] && cost[i][j] < min) {
                        min = cost[i][j];
                        x = i; y = j;
                    }
                }
            }
        }

        if (x != -1 && y != -1) {
            printf("%d - %d : %d\n", x, y, cost[x][y]);
            totalCost += cost[x][y];
            selected[y] = 1;
        }
    }

    printf("Total Minimum Cost = %d\n", totalCost);
    return 0;
}
