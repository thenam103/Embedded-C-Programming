#include <stdio.h>
#include <stdint.h>

// Define bitwise macros here
#define SET_BIT(r, b) ((r) |= (1U << (b)))
#define CLEAR_BIT(r, b) ((r) &= ~(1U << (b)))
#define TOGGLE_BIT(r, b) ((r) ^= (1U << (b)))

uint8_t modify_register(uint8_t reg) {
    // Apply operations in order
    SET_BIT(reg, 2);
    SET_BIT(reg, 7);
    CLEAR_BIT(reg, 3);
    TOGGLE_BIT(reg, 5);

    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}