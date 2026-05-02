#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a,const int b) {
    return a + b;
}

/*El uso de const sirve para indicar que el valor de una variable no debe ser modificado después de su inicialización.
 Al usarlo en los parámetros de una función, como en sumar(const int a, const int b),
 garantizamos que la función tratará a esos valores como de 'solo lectura',
 evitando errores accidentales donde se modifiquen los argumentos originales*/

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

