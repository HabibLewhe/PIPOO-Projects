#include "comparaisons.h"

bool est_egal_int(void *val_1, void *val_2) {
    int *a = (int *) val_1;
    int *b = (int *) val_2;

    return *a == *b; 
}

int main(void) {

    int a = 5, b = 8;
    printf("a == b ? %d\n", 
            egalite((void *)&a, (void *)&b, &est_egal_int));

    return EXIT_SUCCESS;

}
