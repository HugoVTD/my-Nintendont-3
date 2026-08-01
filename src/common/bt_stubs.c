/* src/common/bt_stubs.c
   Stubs para BTInit / BTUpdateRegisters para resolver símbolos faltantes en link.
   Las funciones se marcan weak para no interferir si hay implementación real.
*/

#include <stddef.h>

void BTInit(void) __attribute__((weak));
void BTInit(void) {
    /* stub: no-op */
    (void)0;
}

void BTUpdateRegisters(void) __attribute__((weak));
void BTUpdateRegisters(void) {
    /* stub: no-op */
    (void)0;
}
