
#include <stdint.h>

void main()
{
        asm volatile (
        "mov r0, #0 \n"
        "mov r1, #0 \n"
        "mov r2, #0 \n"
        "mov r3, #0 \n"
        "smc #0 \n"
        );

}
