#include <stdio.h>

int main(){

	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;

	for(i = 0; i < 10; i++){
		ndigit[i] = 0;
	}

	while((c = getchar()) != EOF){
		if((c == ' ') || (c == '\n') || (c == '\t')){
			nwhite++;
		} else if((c >= '0') && (c <= '9')){
			ndigit[c - '0']++;
		} else{
			nother++;
		}
	}

	printf("Digits: ");
	for(i = 0; i < 10; i++){
		printf(" %d", ndigit[i]);
	}
	printf(" Number whitespace: %d", nwhite);
	printf(" Number other: %d\n", nother);
	return 0;
}