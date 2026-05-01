#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a,const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

/* Implementa la función multiplicar, que recibe dos enteros y devuelve su producto. */

int multiplicar(const int a,const int b) {
    return a * b;
}
/*Recibe dos parametros de tipo int (numeros enteros) y te retorna el resultado del pruducto*/
/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0;
}
