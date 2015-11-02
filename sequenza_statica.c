#include <stdlib.h>
#include <stdio.h>

struct s_nodo {
  int val;
  s_nodo* next;
}

typedef struct s_nodo nodo;

/* nodo** seq: testa della lista
   int    verso: crescente (0) o decrescente (1)
*/
void ordina(nodo** seq, int verso);
//inizio Marini Basso
void bubbleSort(nodo** sequence,int len){
    for(int i =0 ; i< len -1; i++){
        nodo *tmp=*sequence;
        nodo* prev= tmp;
        for(int j=0;j<len-1;j++){
            prev=tmp;
            tmp=tmp->next;
            if(prev->info < tmp->info){
                prev=tmp->next;
                tmp=prev;
            }
        }
    }
}

int lengthSequence(nodo** sequence){
    int nNode=0;
    nodo* tmp=*sequence;
    while(tmp!=NULL){
        nNode++;
        tmp=tmp->next;
    }
    return nNode;
}
//fine Marini Basso
