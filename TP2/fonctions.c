#include <assert.h>

int facto_rec(int n){

	if(n == 1)
		return n;
	else 
		return n * facto_rec(n-1);
}


long coefficient(int n, int p){

	assert(n >= p);

	if ( p==0 || p==n)
		return 1;
	else
		(coefficient((n-1),(p-1)) + coefficient((n-1),(p)));
}