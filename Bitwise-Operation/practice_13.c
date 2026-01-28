#include <stdio.h>
#include <stdint.h>

// Define macros here

#define SET_ENABLE(v)  ((uint16_t)((v) & 0x01) << 0)
#define SET_MODE(v)    ((uint16_t)((v) & 0x03) << 1)
#define SET_SPEED(v)   ((uint16_t)((v) & 0x07) << 3)

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
    // Use macros to set fields
    uint16_t result = 0;
    
    result |= SET_ENABLE(enable);
    result |= SET_MODE(mode);
    result |= SET_SPEED(speed);

    return result;
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

    uint16_t reg = build_register(enable, mode, speed);
    printf("%u", reg);
    return 0;
}