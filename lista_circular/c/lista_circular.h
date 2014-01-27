#include <stddef.h>
#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H
typedef struct cell{
    struct cell *next = NULL;
    int id;
} Cell;

bool empty(Cell *);
void insert(Cell *, Cell *);

#endif
