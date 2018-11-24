#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
    int val = 351593;
    int ival = val;
    float fval = (float) ival;
    int *pival = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pival);
    // ex 2.7
    char *m = "mnopqr";
    show_bytes((byte_pointer) m, strlen(m));
    return 0;
}
