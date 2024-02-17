#include <stdio.h>
void bubbleSort(int a[], int n) //main code
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() //main fun call first ...
{
    int a[100], n;
    printf("Enter the number of elements:\n ");
    scanf("%d", &n);
   printf("Enter the elements\n ");
 for (int i = 0; i < n; i++) //input array ;
   {
       scanf("%d", &a[i]);
   }
    printf("The array before sorting: ");
      for (int i = 0; i < n; i++) //for display
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    bubbleSort(a, n); //sort the number
    printf("The array after sorting: ");
       for (int i = 0; i < n; i++) // display after sorting
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

