#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    int number;
} element;

typedef struct Shell
{
    element *data;
    int size;
    int capacity;
} Shell;

void Initialize_Shell(Shell *h, int capacity);

void Insert_Shell(Shell *h, element e);

void Destroy_Shell(Shell *h);

void ShellSort(element *A, int n);
