#include "math.h"
#include "trace.h"

int somma(int a, int b) {
    TRACE();
    return a + b;
}

int differenza(int a,int b) {
    TRACE();
    return a - b;
}

int moltiplicazione(int a, int b) {
    TRACE();
    return a * b;
}

float divisione(float a, float b) {
    TRACE();
    if (b !=0) {
        return a/b;
    } else {
        printf("Errore: divisione per zero.\n");
        return 0.0
    }
}