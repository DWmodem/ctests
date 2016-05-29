#include <stdio.h>
#define TEM 0

int cel_to_fahr(int temp);
int main(){

	printf("Celsius: %d\n", TEM);
	printf("Fahrenheit: %d\n", cel_to_fahr(TEM));
	return 0;
}

int cel_to_fahr(int temp){

	return (((temp * 9) / 5) + 32);
}

int fahr_to_cel(int temp){

	return (5 * (temp - 32) / 9 );
}