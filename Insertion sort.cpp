#include <stdio.h>
void insertionSort(int a[], int n) // main code
{
    int i, j, key;
    for (int j = 1; j < n; j++)
    {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}
int main()
{
    int a[100], n;
    printf("Enter the number of elements  :\n "); //size of array
    scanf("%d", &n);
    printf("Enter the elements insertion sort :\n "); 
  for (int i = 0; i < n; i++) //input the array
    {
        scanf("%d", &a[i]);
    }
    printf("The array before sorting: ");
  for (int i = 0; i < n; i++) //display
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    insertionSort(a, n);
    printf("The array after sorting: ");
  for (int i = 0; i < n; i++) //display 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

