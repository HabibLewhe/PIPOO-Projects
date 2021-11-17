#include <stdlib.h>
#include <stdio.h>

struct une_struct {
    float r;
    float i;
};

void modifier(struct une_struct c, float r, float i) {
    c.r = r;
    c.i = i;
}

int main() {
    struct une_struct c;
    c.r = 2.5;
    c.i = 1.0;
    modifier(c, 1.8, 4.2);
    printf("%f\t%f\n", c.r, c.i); // ?
    return EXIT_SUCCESS;
}
