#include <stdio.h>
#include <stdint.h>

uint32_t update_register(uint32_t reg) {
    uint32_t changeBits = (reg >> 10) & 0x1F;
    if(changeBits < 31){
        changeBits += 1;
    }
    
    reg &= ~(0x1f << 10);
    reg |= changeBits << 10;

    return reg;
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    uint32_t updated = update_register(reg);
    printf("%u", updated);
    return 0;
}