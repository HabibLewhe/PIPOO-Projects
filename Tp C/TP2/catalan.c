#include "catalan.h"

long int catalan(int n) {
    return facto_rec(2*n)/((facto_rec(n+1)*facto_rec(n)));
    //return coefficient(2*n,n)/(n+1);
}
