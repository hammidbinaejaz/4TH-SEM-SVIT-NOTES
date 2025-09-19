// topological sort

#include <stdio.h>

int adj[10][10], visited[10], stack[10], top = -1;

void dfs(int v, int n) 
{
    visited[v] = 1;

    for (int i = 0; i < n; i++) 
    {
        if (adj[v][i] && !visited[i])
            dfs(i, n);
    }

    stack[++top] = v;  // push vertex to stack after all neighbours
}

int main() 
{
    int n, e, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter %d edges (from to):\n", e);
    for (int i = 0; i < e; i++) {
        scanf("%d%d", &u, &v);
        adj[u][v] = 1;  // directed edge from u to v
    }

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++)
        if (!visited[i])
            dfs(i, n);

    printf("Topological Order of the given graph:\n");
    while (top != -1)
        printf("%d ", stack[top--]);

    return 0;
}
