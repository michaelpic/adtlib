//gruppo Marini Biasia Simonetto Caineanu 4 CI
#include <stdio.h>
struct Nodo{
    int info;
    struct Nodo* next;
};
typedef struct Nodo nodo;
void enqueue(nodo** testa , int dato);
void dequeue(nodo** testa);
void stampa(nodo* testa);

int main(){
    nodo* a=NULL;
    enqueue(&a,4);
    enqueue(&a,7);
    printf("enqueue 4 & 7.\n");
    stampa(a);
    dequeue(&a);
    printf("dequeue:\n");
    stampa(a);
    return 0;
}

void enqueue(nodo** testa , int dato){
    //creo il nodo con il nuovo dato
    nodo* tmp=malloc(sizeof(nodo));
    tmp->info=dato;
    tmp->next=NULL;
    //se la coda e' nulla diventa il nodo stesso
    if(*testa==NULL)
        *testa=tmp;
    //altrimenti scorro e lo inserisco in coda
    else{
        nodo* sc=*testa;
        while(sc->next!=NULL)
            sc=sc->next;
        sc->next=tmp;
    }
}

void dequeue(nodo** testa){
    nodo* n_tmp=*testa;
    //se la coda e' nulla non si può deallocare nulla
    if(*testa==NULL)
        return NULL;
    else{
        //la coda parte dal secondo elemento e , dopo aver salvato un puntatore al primo elemento lo dealloco.
        int tmp=n_tmp->info;
        *testa=n_tmp->next;
        free(n_tmp);
        //ritono infine il valore inter del nodo deallocato
        return tmp;
    }
}

void stampa(nodo* testa){
    nodo* tmp=testa;
    while(tmp !=NULL){
        printf("%d\n", tmp->info);
        tmp=tmp->next;
    }
}
// init
