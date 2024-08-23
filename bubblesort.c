#include <stdio.h>

int bubble_sort(int *ptr, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= size - i/*or j < size - i -1*/; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    for (int z = 0; z < size; z++)
    {
        printf("%d\t", ptr[z]);
    }
}

int main()
{
    int arr[] = {4, 3, 6, 7, 9, 0, 1, 5, 2, 8,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
}