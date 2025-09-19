#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int a[], int low, int high) 
{
    int pivot = a[low];
    int i = low + 1, j = high, temp;

    while (i <= j) 
    {
        while (i <= high && a[i] <= pivot) i++;
        while (a[j] > pivot) j--;

        if (i < j) 
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // Swap pivot with a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quickSort(int a[], int low, int high) 
{

    if (low < high) 
    {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    // Fill array with random numbers
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 10000;

    // Time the sorting
    clock_t start = clock();
    quickSort(a, 0, n - 1);
    clock_t end = clock();

    // Print sorted array (optional)
    /*
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    */

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Quick Sort completed for %d elements in %.6f seconds.\n", n, time_taken);

    return 0;
}
