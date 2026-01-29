#include <stdio.h>
#include <stdint.h>

uint8_t set_range(uint8_t reg, uint8_t start, uint8_t end) {
    // Your code here
    uint8_t mask = (1U << (end - start + 1) - 1) << start;
    return reg | mask;
}

uint8_t set_range_2(uint8_t reg, uint8_t start, uint8_t end) {
    // Your code here
    for(uint8_t i = start; i <= end; i++){
        reg |= (1U << i);
    }
    return reg;
}

int main() {
    uint8_t reg, start, end;
    scanf("%hhu %hhu %hhu", &reg, &start, &end);
    printf("%u", set_range(reg, start, end));
    return 0;
}