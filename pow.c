#include "pow.h"
#include "trace.h"

int potenza(int base,int esponente)
{
    TRACE();
    int risultato =1;
    for (int i= 0; i < esponente; i++) {
        risultato *= base;
    }
    return risultato;
}