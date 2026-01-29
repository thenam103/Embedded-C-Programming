#include <stdio.h>
#include <stdint.h>

#define SET_BIT(r, b) ((r) |= (1U << (b)))

uint16_t spread_bits(uint8_t val) {
    // Your logic here
    uint16_t result = 0;
    for (uint8_t i = 0; i < 8; i++)
    {
        if((val >> i) & 1){
            SET_BIT(result, i * 2);
        }
    }
    return result;
}

uint16_t spread_bits_2(uint8_t val) {
    // Your logic here
    uint16_t result = 0;
    for (uint8_t i = 0; i < 8; i++)
    {
        uint8_t bit = (val >> i) & 1;
        result |= (bit << (i * 2));
    }
    return result;
}


int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}