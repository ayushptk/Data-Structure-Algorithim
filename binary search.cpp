#include <stdio.h>

int binarySearch(int a[], int x, int low, int high) { //main code
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (a[mid] == x) //best case
            return mid;

        if (a[mid] > x) //left side
            return binarySearch(a, x, low, mid - 1);

        return binarySearch(a, x, mid + 1, high); //right side
    }

    return -1;
}

int main() {
    int n;
    int key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the sorted elements of the array:\n"); // for binary search we need the sorted list 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &key);

    int result = binarySearch(a, key, 0, n - 1);

    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}

