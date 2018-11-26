#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

// A
void least_sifnificant_byte_zero(int x) {
    int res = x & 0xFF;
    show_bytes((byte_pointer) &res, sizeof(int));
}

// B
void all_but_least_complemented(int x) {
    int res = x ^ ~0xFF;
    show_bytes((byte_pointer) &res, sizeof(int));
}

// C
void least_sifnificant_byte_one(int x) {
    int res = x | 0xFF;
    show_bytes((byte_pointer) &res, sizeof(int));
}

int main() {
    int test = 0x87654321;
    least_sifnificant_byte_zero(test);
    all_but_least_complemented(test);
    least_sifnificant_byte_one(test);
    return 0;
}
