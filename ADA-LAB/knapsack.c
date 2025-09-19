#include <stdio.h>

void knapsack(int w[], int v[], int n, int cap, int fractional) {
    float ratio[10];
    for (int i = 0; i < n; i++) ratio[i] = (float)v[i]/w[i];

    for (int i = 0; i < n-1; i++)  // sort by ratio
        for (int j = i+1; j < n; j++)
            if (ratio[i] < ratio[j]) {
                float tr = ratio[i]; ratio[i] = ratio[j]; ratio[j] = tr;
                int tw = w[i]; w[i] = w[j]; w[j] = tw;
                int tv = v[i]; v[i] = v[j]; v[j] = tv;
            }

    float total = 0;
    for (int i = 0; i < n && cap > 0; i++) {
        if (w[i] <= cap) {
            total += v[i];
            cap -= w[i];
        } else if (fractional) {
            total += ratio[i]*cap;
            cap = 0;
        }
    }
    printf("Total value: %.2f\n", total);
}

int main() {
    int w[] = {10, 20, 30};
    int v[] = {60, 100, 120};
    int n = 3, cap = 50;

    printf("0/1 Knapsack:\n");
    knapsack(w, v, n, cap, 0);

    printf("Fractional Knapsack:\n");
    knapsack(w, v, n, cap, 1);
    return 0;
}
