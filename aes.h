/*
 * Advanced Encryption Standard
 * @author Dani Huertas
 * @email huertas.dani@gmail.com
 *
 * Based on the document FIPS PUB 197
 */

#include <stdint.h>

/*
 * Multiplication in GF(2^8)
 * http://en.wikipedia.org/wiki/Finite_field_arithmetic
 * Irreducible polynomial m(x) = x8 + x4 + x3 + x + 1
 * 
 * NOTE: we are using the look up table instead of the (slower) gmult function
 */

void soft_aesdec(uint8_t *in, uint8_t *out, uint8_t *w);

void soft_aesenc(uint8_t *in, uint8_t *out, uint8_t *w);
