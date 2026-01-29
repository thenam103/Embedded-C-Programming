#include <stdio.h>

/**
 * Set or Clear a Specific Bit in a Register
 */

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    // Write your code here
    if(mode == 0){
        reg &= ~(1 << pos);
    }

    if(mode == 1){
        reg |= (1 << pos);
    }
    return reg;
}

int main() {
    unsigned char reg;
    int pos, mode;
    scanf("%hhu %d %d", &reg, &pos, &mode);
    printf("%d", modifyBit(reg, pos, mode));
    return 0;
}