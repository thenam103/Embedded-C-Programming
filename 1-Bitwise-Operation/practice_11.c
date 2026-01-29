#include <stdio.h>
#include <stdint.h>

static inline uint8_t check_bit(uint8_t reg, uint8_t b)
{
    return reg & (1U << b);
}

const char *flag_names[8] = {
    "Power On",
    "Error",
    "Tx Ready",
    "Rx Ready",
    "Overheat",
    "Undervoltage",
    "Timeout",
    "Reserved"
};

void decode_status(uint8_t status_reg)
{
    // Your logic here
    for (uint8_t i = 0; i < 8; i++)
    {
        if (check_bit(status_reg, i))
        {
            printf("%s\n", flag_names[i]);
        }
    }
}

void decode_status_2(uint8_t status_reg)
{
    // Your logic here
    for (uint8_t i = 0; i < 8; i++)
    {
        if ((status_reg >> i) & 1)
        {
            printf("%s\n", flag_names[i]);
        }
    }
}

int main()
{
    uint8_t reg;
    scanf("%hhu", &reg);
    decode_status_2(reg);
    return 0;
}