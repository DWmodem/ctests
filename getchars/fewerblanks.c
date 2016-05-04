#include <stdio.h>

int main(){

	int isBlanking;
	int c;
	isBlanking = 0;

	while((c = getchar()) != EOF){
		if(c != ' '){
			if(isBlanking){
				putchar(' ');
				isBlanking = 0;
			}
			putchar(c);
		} else {
			isBlanking = 1;
		}
	}
	return 0;
}