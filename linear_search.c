#include <stdio.h>
#include <stdlib.h>

int search(int *array, int element, int size)
{
    int i;
    for(i = 0; i < size; ++i)
    {
        if(array[i] == element)
        {
            return i;
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

    printf("\nArray position of %d: %d", i, search(array, i, size));

    free(array);
    
    return 0;
}
