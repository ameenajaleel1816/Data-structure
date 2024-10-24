#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    int swapped;
    for (i = 0; i < n - 1; i++) 
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
       
        if (swapped == 0)
        {
            break;
        }
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
        {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Unsorted array:\n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Sorted array:\n");
    printArray(arr, n);
    
    return 0;
}

