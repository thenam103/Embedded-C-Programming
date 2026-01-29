#include <stdio.h>
#include <stdint.h>

void convert_to_big_endian(uint32_t value, uint8_t arr[4]) {
    for (uint8_t i = 0; i <= 31; i += 8)
    {
        arr[3 - (i / 8)] = ((value & (0x00FF << i)) >> i);
    }
}

int main() {
    uint32_t value;
    uint8_t arr[4];
    scanf("%u", &value);
    convert_to_big_endian(value, arr);
    for (int i = 0; i < 4; i++) {
        printf("%u", arr[i]);
        if(i<3){
            printf(" ");
        }
    }
    return 0;
}