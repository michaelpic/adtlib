//pila statica Benacchio,Carpanedo,Kerber,Sguario,Zotta

#include <stdio.h>
#include <stdlib.h>

#define max_stack 1000

struct stack{
  int array[max_stack];
  int indice = 0;         //indice di inserimento
}

void push(stack pila, int a)
{
  if(pila.indice == max_stack)
    printf("Stack overflow");
  else
  {
    pila.array[pila.indice] = a;
    pila.indice++;
  }
}

int pop(stack pila)
{
  if(pila.indice == max_stack)
    printf("Stack overflow");
  else
  {
    pila.indice--;
    return pila.array[pila.indice]
  }
}
