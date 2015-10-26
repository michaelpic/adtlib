#include <stdlib.h>
#include <stdio.h>

struct s_nodo {
  int val;
  s_nodo* next;
}

typedef struct s_nodo nodo;

void ordina(nodo**);
