#include <stdio.h>
typedef enum
{
    not_found,
    found
} status;

status linear_search(int *ptr, int size, int value, int *p_index)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == value)
        {
            *p_index = i;
            return found;
        }
    }
    return not_found;
}
int main()
{
    int arr[10] = {2, 15, 18, 33, 50, 5, 100, 37, 44, 55};
    int index;
    int result = linear_search(arr, 10, 9, &index);
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

// typedef enum/*Days*/{
//    false,
//    true,
// }Days;

// int main(){
// Days x = true;
// printf("%d",x);
// }
