#include <stdio.h>
#include <stdlib.h>
#include "SortShell.h"

void Initialize_Shell(Shell *h, int capacity)
{
    h->data = malloc(sizeof(element) * capacity);

    if (h->data == NULL)
    {
        printf("ERROR: Initialize_Shell(&h, capacity)\nNo se pudo reservar memoria\n");
        exit(EXIT_FAILURE);
    }

    h->size = 0;
    h->capacity = capacity;
}

void Insert_Shell(Shell *h, element e)
{
    if (h->size == h->capacity)
    {
        printf("ERROR: Insert_Shell(&h, element)\nArreglo lleno\n");
        exit(EXIT_FAILURE);
    }

    h->data[h->size] = e;
    h->size++;
}

void Destroy_Shell(Shell *h)
{
    free(h->data);
    h->data = NULL;
    h->size = 0;
    h->capacity = 0;
}

/*
Algoritmo de ordenamiento Shell
*/

void ShellSort(element *A, int n)
{
    int gap = n / 2;
    int i;

    while (gap >= 1)
    {
        int cambios;

        do
        {
            cambios = 0;

            for (i = gap; i < n; i++)
            {
                if (A[i - gap].number > A[i].number)
                {
                    element temp = A[i];
                    A[i] = A[i - gap];
                    A[i - gap] = temp;
                    cambios++;
                }
            }

        } while (cambios != 0);

        gap = gap / 2;
    }
}
