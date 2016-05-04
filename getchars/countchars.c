#include <stdio.h>

int main(){

	int nl;
	for (nl = 0; getchar() != EOF ;nl++ );

	printf("%d\n", nl);
	return 0;
}