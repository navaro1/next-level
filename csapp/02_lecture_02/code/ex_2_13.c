#include <stdio.h>

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

int bool_xor(int x, int y) {
    int result = bis(bic(x, y), bic(y, x));
    return result;
}