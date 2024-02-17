#include <stdio.h>
int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    int key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &key);

    int index = linearSearch(a, n, key);

    if (index != -1) {
        printf("Element  found at index %d.\n",index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

