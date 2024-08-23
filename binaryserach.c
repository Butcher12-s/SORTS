#include <stdio.h>
typedef enum
{
    not_found,
    found
} status;

status binary_search(int *ptr, int size, int value, int *p_index)
{
    int l = 0;
    int r = size - 1;
    int mid = 0;
    for (; l <= r;)/// better with while loop while(l<=r) the update m=(l+r)/2

    {
        mid = (r + l) / 2;

        if (value == ptr[mid])
        {
            *p_index = mid;
            return found;
        }
        else if (ptr[mid] < value)
        {
            l = mid + 1;
        }
        else if (ptr[mid] > value)
        {
            r = mid - 1;
        }
    }
    return not_found;
}
int main()
{
    int arr[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int index;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, size, 9, &index);
    if (result == found)
    {
        printf("%d", index);
    }
    else if (result == not_found)
    {
        printf("not found");
    }
    else
    {
        printf("error");
    }
}
