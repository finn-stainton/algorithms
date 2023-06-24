#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE(x) (sizeof x / sizeof x[0])

void print_array(int a[], int size, int highlight);

int main()
{
    int array[6] = {5, 2, 4, 6, 1, 3};

    printf("Insertion Sorting: \n");

    for (int j = 1; j < 6; j++)
    {
        print_array(array, ARRAYSIZE(array), j - 1);
        int key = array[j];
        int i = j - 1;
        // Insert A[j] into the sorted sequence A[1.. j - 1].
        while (i >= 0 && i < ARRAYSIZE(array) && array[i] > key)
        {
            printf("%d > %d, Cache: %d\n", array[i], key, key);
            array[i + 1] = array[i];
            print_array(array, ARRAYSIZE(array), i + 1);
            i = i - 1;
            print_array(array, ARRAYSIZE(array), i);
        }

        printf("Insert cached %d\n", key);
        array[i + 1] = key;
        print_array(array, ARRAYSIZE(array), i + 1);

        printf("-----------------------\n");
    }

    printf("Done.\n");

    exit(0);
}

void print_array(int a[], int size, int highlight)
{
    for (int i = 0; i < size; i++)
    {
        if (i == highlight)
        {
            printf("[");
        }
        else
        {
            printf(" ");
        }
        printf("%d", a[i]);
        if (i == highlight)
        {
            printf("]");
        }
        else
        {
            printf(" ");
        }
        printf(" ");
    }
    printf("\n");
}
