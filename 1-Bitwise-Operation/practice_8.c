#include <stdio.h>
#include <stdint.h>

/**
 * You are working with a 32-bit configuration register. 
 * Set a few bits starting from a given position and covering a specific length. 
 * The bits must be set to 1 (ON), without affecting other bits in the register.
 */

uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len) {
    uint32_t mask = ((1U << len) - 1) << pos;
    return reg | mask;
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", set_bits(reg, pos, len));
    return 0;
}