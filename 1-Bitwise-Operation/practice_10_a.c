#include <stdio.h>
#include <stdint.h>

// Define bitwise macros here
#define BIT0 (1U << 0)
#define BIT1 (1U << 1)
#define BIT2 (1U << 2)
#define BIT3 (1U << 3)
#define BIT4 (1U << 4)
#define BIT5 (1U << 5)
#define BIT6 (1U << 6)
#define BIT7 (1U << 7)

uint8_t modify_register(uint8_t reg) {
    // Apply operations in order
    reg |= BIT2;
    reg |= BIT7;
    reg &= ~BIT3;
    reg ^= BIT5;
    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}