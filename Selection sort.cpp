#include <stdio.h>

void selectionSort(int a[], int n) //main codee
{
    int min, temp;
//    a[5]={27,16,44,10,7}
    for (int i = 0; i < n - 1; i++)  // 0<=3 true
    {
        min = i; // min=0;
        for (int j = i + 1; j < n; j++) //j=0+1=1 ; 1<=4 true
        {
            if ( a[min]> a[j] )  //a[0]>a[1]  27>16 true
            {
                min = j;  //min=1;
            }
        }
        if (i!= min)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main()
{
    int a[100], n;
    printf("Enter the number of elements:\n ");
    scanf("%d", &n);
    printf("Enter the elements:\n "); // for insert the elements in array
  for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array before sorting: "); 
    for (int i = 0; i < n; i++)  // for display the sorting 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    selectionSort(a, n);
    printf("The array after sorting: ");
    for (int i = 0; i < n; i++)     // for sorting the number...
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}

