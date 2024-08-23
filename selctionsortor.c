#include <stdio.h>

void selection_sort(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[j] < ptr[m])
            {
                m = j;
            }
        }
        int temp = ptr[i];
        ptr[i] = ptr[m];
        ptr[m] = temp;
    }
    for (int z = 0; z < size; z++)
    {
        printf("%d\t", ptr[z]);
    }
}

int main()
{
    int arr[] = {4, 3, 6, 7, 9, 0, 1, 5, 2, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);
    return 0;
}
