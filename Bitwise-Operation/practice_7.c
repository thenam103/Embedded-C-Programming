#include <stdio.h>
#include <stdint.h>

uint8_t is_bit_set(uint8_t reg, uint8_t pos) {
    return (reg & (1U << pos)) ? 1 : 0;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    printf("%u", is_bit_set(reg, pos));
    return 0;
}