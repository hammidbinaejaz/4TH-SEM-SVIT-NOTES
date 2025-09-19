#include <stdio.h>

// Warshall's algorithm to compute transitive closure
void warshall(int p[10][10], int n) {
    int i, j, k;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                p[i][j] = p[i][j] || (p[i][k] && p[k][j]);
            }
        }
    }
}

int main() {
    int p[10][10], n;

    printf("Enter number of vertices (max 10): ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (use 1 for edge, 0 for no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &p[i][j]);

    warshall(p, n);

    printf("Transitive Closure Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }

    return 0;
}
