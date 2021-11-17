#include <stdlib.h>
#include <stdio.h>

void swap(void *val_1, void *val_2) {
    void *tmp;
    tmp = val_1;
    val_1 = val_2;
    val_2 = tmp;
}

int main(void) {
    int a = 5, b =2;
    swap((void*)&a, (void*)&b);
    printf("%d %d\n", a, b);	
    return EXIT_SUCCESS;
}
