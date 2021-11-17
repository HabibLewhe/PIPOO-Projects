// www.zestedesavoir.com
#include <stdio.h>

int triple(int a) {
    return a * 3;
}

int main(void) {

    // pointeur sur la fonction triple
    int (*pt)(int) = &triple;
    printf("%d.\n", (*pt)(3));
    return 0;
}

