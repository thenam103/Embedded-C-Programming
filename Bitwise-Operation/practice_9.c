#include <stdio.h>
#include <stdint.h>

/**
    You are given a 16-bit register (uint16_t).
    Your task is to:
    Return a value where only the highest (leftmost) set bit is retained
    All other bits must be cleared
 */

/// @brief solution 1
/// @param reg 
/// @return 
uint16_t highest_set_bit(uint16_t reg) {
    // Your logic here
    for(int8_t i = 15; i >= 0; i--){
        if(reg & (1U << i)){
            return (uint16_t)(1U << i);
        }
    }

    return 0;
}

/// @brief solution 2
/// @param reg 
/// @return 
uint16_t highest_set_bit_2(uint16_t reg) {
    if(reg == 0)
        return 0;

    uint16_t result = 1U << 15;
    while((reg & result) == 0){
        result >>= 1;
    }

    return result;
}

/// @brief solution 3
/// @param reg 
/// @return 
uint16_t highest_set_bit_3(uint16_t reg)
{
    if (reg == 0)
        return 0;

    // tràn bit
    reg |= (reg >> 1);
    reg |= (reg >> 2);
    reg |= (reg >> 4);
    reg |= (reg >> 8);

    // keep highest bit
   return reg & ~(reg >> 1);
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit_3(reg);
    printf("%hu", result);
    return 0;
}