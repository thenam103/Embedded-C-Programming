#include <stdio.h>
#include <stdint.h>

uint32_t extract_even_bits(uint32_t reg) {
    uint32_t result = 0;
    uint32_t bit = 0;

    for(uint8_t i = 0; i <= 31; i += 2){
        bit = ((reg >> i) & 1) ? 1 : 0;
        result |= (bit << (i / 2));
    }

    return result;
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    printf("%u", extract_even_bits(reg));
    return 0;
}