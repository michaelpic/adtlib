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

//Bubble sort ricorsivo #proggwp
pNODO* bbsortric(pNODO *head,pNODO* p,int count){
    if(p->next == NULL)                                 //controllo fine lista
        if(count)                                       //count controlla l'ordinamento completato
            return bbsortric(head,head,0);              //scorro la lista da zero
        else
            return head;                                //ritorno la lista ordinata (al main)
    else{
        if(p->info > p->next->info){                    //controllo valori p1>p2
            int tmp = p->info;
            p->info = p->next->info;
            p->next->info = tmp;
            count=1;                                    //necessario al controllo seguente (ricorda gli scambi)
        }
        return bbsortric(head,p->next,count);           //scorre la lista dalla prima all'ultima posizione
    }
}//Benacchio-Silvestrin-Basso_N
