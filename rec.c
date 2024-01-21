#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void swap(long long int *a, long long int *b) {
    long long int temp = *b;
    *b = *a;
    *a = temp;
}

int partition(long long int arr[], int low, int high) {
    long long int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(long long int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%lli", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    quicksort(arr, 0, n - 1);

    long long int minDifference = 100000;
    for (int i = 0; i <= n - k; i++) {
        long long int currentDifference = arr[i + k - 1] - arr[i] + 1;
        if (currentDifference < minDifference) {
            minDifference = currentDifference;
        }
    }

    printf("%lli", minDifference);

    return 0;
}
