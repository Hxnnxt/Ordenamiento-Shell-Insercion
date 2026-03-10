#include <stdio.h>
#include <stdlib.h>
#include "SortShell.h"

int main(int argc, char *argv[])
{
    int i;
    int n = atoi(argv[1]);

    element *A = malloc(sizeof(element) * n);

    if (A == NULL)
    {
        printf("\nError al reservar memoria para %d elementos\n", n);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i].number);
    }

    ShellSort(A, n);

    for (i = 0; i < n; i++)
    {
        printf("[%d]", A[i].number);
    }

    printf("\n");

    free(A);
}
