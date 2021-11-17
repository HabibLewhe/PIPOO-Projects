#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Necessaire pour memcpy

void swap(void *val_1, void *val_2, size_t taille) {
    void *tmp = malloc( taille );
    memcpy(tmp, val_1, taille);
    memcpy(val_1, val_2, taille);
    memcpy(val_2, tmp, taille);
    free(tmp);
}

int main(void) {
    int a = 5, b =2;
    swap((void*)&a, (void*)&b, sizeof(int));
    printf("%d %d\n", a, b);	
    return EXIT_SUCCESS;
}
