// www.tutorialspoint.com
#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main () {

   int n;

   qsort(values, 5, sizeof(int), cmpfunc);
   for(int i = 0; i < 5; ++i)
       printf("%d\t", values[i]);
   puts("");
  
   return EXIT_SUCCESS;

}
