#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    int number;
} element;

typedef struct Insercion
{
    element *data;
    int size;
    int capacity;
} Insercion;

void Initialize_Insercion(Insercion *h, int capacity);

void Insert_Insercion(Insercion *h, element e);

void Destroy_Insercion(Insercion *h);
