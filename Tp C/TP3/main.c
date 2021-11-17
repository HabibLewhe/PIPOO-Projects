#include <stdio.h>
#include <stdlib.h>


int main(){

	int a = 0;


	scanf("%d", &a);

	exercice2(a);


}

void exercice2(int a){

	int *ptr_a = &a;

	*ptr_a = a*a;

	printf("%d\n", a);
}