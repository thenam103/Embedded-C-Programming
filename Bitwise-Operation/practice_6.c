#include <stdio.h>
#include <stdint.h>

uint8_t toggle_bit(uint8_t reg, uint8_t pos) {
    return reg ^= (1U << pos);
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    uint8_t result = toggle_bit(reg, pos);
    printf("%u", result);
    return 0;
}