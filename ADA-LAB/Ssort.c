// selection sort 

#include <stdio.h>
#include <time.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap only if needed
        if (minIndex != i) 
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() 
{
    int n;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Ask user to enter elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Step 3: Time the sorting
    clock_t start = clock();
    selectionSort(arr, n);
    clock_t end = clock();

    // Step 4: Calculate time
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Step 5: Output sorted array
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Step 6: Output time and complexity
    printf("\nSelection Sort completed for %d elements in %.6f seconds.\n", n, time_taken);
    printf("Time Complexity: O(n^2)\n");

    return 0;
}
