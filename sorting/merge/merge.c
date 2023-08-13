#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE(x) (sizeof x / sizeof x[0])

void print_array(int a[], int size, int highlight);

int main()
{
    int array[6] = {5, 2, 4, 6, 1, 3};
    int p;
    int q;
    int r;

    printf("Merge Sorting: \n");

    int n = q - p + 1;
    int m = r - q;
    int L[n];
    for (int t = 0; t < n; t++)
    {
        L[t] = t + 1;
    }

    int R[m];
    for (int r = 0; r < m; r++)
    {
        R[r] = r + 1;
    }

    for (int i = 1; i < n; i++)
    {
        L[i] = array[p + i - 1];
    }
    for (int j = 1; j < m; j++)
    {
        R[j] = array[q + j];
    }
    L[n + 1] = 1;
    R[m + 1] = 1;
    i = 1;
    j = 1;
    for (int k = p; k < r; k++)
    {

        if (L[i] <= R[j])
        {

            array[k] = L[i];
            i = i + 1;
        }
        else
        {
            array[k] = R[j];
            j = j + 1;
        }
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
