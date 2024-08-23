#include <stdio.h>

void repeated(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == -1)
        {
            continue;
        }
        int num = 0;
        int current = ptr[i];
        for (int j = 0; j < size; j++)
        {
            if (ptr[j] == current)
            {
                num++;

                if (j != i)
                {
                    ptr[j] = -1;
                }
            }
        }
        printf("The number %d is repeated %d times.\n", current, num);
    }
}

int main()
{
    int arr[] = {2, 5, 3, 2, 5, 7, 2, 7,12,43,12,57,7,3,188};
    int size = sizeof(arr) / sizeof(arr[0]);
    repeated(arr, size);

    return 0;
}
