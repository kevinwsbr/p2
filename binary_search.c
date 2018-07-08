#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, int element, int size)
{
    int begin = 0, middle, end = size - 1;
    
    while(begin <= end)
    {
        middle = (begin+end)/2;
        
        if (array[middle] < element)
        {
            begin = middle + 1;
        }
        else if (array[middle] > element)
        {
            end = middle - 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int i, size, *array;

    printf("Enter the array size: ");
    scanf("%d", &size);
    
    array = (int *) malloc(size * sizeof(int));
    
    printf("\nEnter the values: ");
    for(i = 0; i < size; ++i)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the value for search: ");
    scanf("%d", &i);

    printf("\nArray position of %d: %d", i, binary_search(array, i, size));

    free(array);
    
    return 0;
}
