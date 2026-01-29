#include <stdio.h>
#include <stdint.h>

uint8_t extract_field(uint16_t reg) {
    uint8_t result = 0;
    result = (reg >> 4) & (0x1F);
    return result;
}

int main() {
    uint16_t reg;
    scanf("%hx", &reg);
    printf("%u", extract_field(reg));
    return 0;
}