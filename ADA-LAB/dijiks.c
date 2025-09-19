
#include <stdio.h>
#define V 5
#define INF 9999

int minDist(int dist[], int vis[]) {
    int m = INF, idx = -1;
    for (int i = 0; i < V; i++)
        if (!vis[i] && dist[i] < m) m = dist[i], idx = i;
    return idx;
}

int main() {
    int g[V][V] = {
        {0,10,0,30,100},
        {10,0,50,0,0},
        {0,50,0,20,10},
        {30,0,20,0,60},
        {100,0,10,60,0}
    };
    int dist[V], vis[V] = {0}, src=0;

    for (int i=0; i<V; i++) dist[i] = INF;
    dist[src] = 0;

    for (int i=0; i<V-1; i++) {
        int u = minDist(dist, vis);
        vis[u] = 1;
        for (int v=0; v<V; v++)
            if (!vis[v] && g[u][v] && dist[u]+g[u][v]<dist[v])
                dist[v] = dist[u] + g[u][v];
    }

    printf("Vertex Dist\n");
    for (int i=0; i<V; i++) printf("%d \t %d\n", i, dist[i]);

    return 0;
}
