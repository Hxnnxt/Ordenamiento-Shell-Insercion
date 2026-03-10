#include <stdio.h>
#include <stdlib.h>
#include "SortInsercion.h"

void Initialize_Insercion(Insercion *h, int capacity)
{
    h->data = malloc(sizeof(element) * capacity);

    if (h->data == NULL)
    {
        printf("ERROR: No se pudo reservar memoria\n");
        exit(EXIT_FAILURE);
    }

    h->size = 0;
    h->capacity = capacity;
}

void Insert_Insercion(Insercion *h, element e)
{
    if (h->size == h->capacity)
    {
        printf("ERROR: arreglo lleno\n");
        exit(EXIT_FAILURE);
    }

    h->data[h->size] = e;
    h->size++;
}

void Destroy_Insercion(Insercion *h)
{
    free(h->data);
    h->data = NULL;
    h->size = 0;
    h->capacity = 0;
}

/* algoritmo de ordenamiento por insercion */

void InsercionSort(element *A, int n)
{
    int i;

    for (i = 1; i < n; i++)
    {
        element clave = A[i];
        int j = i - 1;

        while (j >= 0 && A[j].number > clave.number)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = clave;
    }
}
