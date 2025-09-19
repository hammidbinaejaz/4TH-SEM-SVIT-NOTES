#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000
int temp[MAX];  // Temp array for merging

// Function to merge two sorted halves
void SimpleMerge(int a[], int low, int mid, int high) 
{
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) 
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

// Recursive merge sort
void MergeSort(int a[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    MergeSort(a, low, mid);
    MergeSort(a, mid + 1, high);
    SimpleMerge(a, low, mid, high);
}

int main() {
    int n;
    printf("Enter number of elements (n > 5000): ");
    scanf("%d", &n);

    int a[n];

    // Generate random elements
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100000;  // values from 0 to 99999

    // Measure sorting time
    clock_t start = clock();
    MergeSort(a, 0, n - 1);
    clock_t end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Merge Sort completed for %d elements in %.6f seconds.\n", n, time_taken);

    return 0;
}
