#include <stdio.h>

#define MAX_WORDLENGTH 64
#define IN 1
#define OUT 0

// Histogram is:
// y: length of word
// x: occurences

int print_histogram(int stats[], int length);
int main(){

	int wordstats[MAX_WORDLENGTH];
	int c, i, state, lenc;
	lenc = 0;
	state = OUT;

	for(i = 0; i < MAX_WORDLENGTH; i++){
		wordstats[i] = 0;
	}

	//gather stats
	while((c = getchar()) != EOF){
		if((c == ' ') || (c == '\n') || (c == '\t')){
			if(state == IN){
				wordstats[lenc]++;
				lenc = 0;
				state = OUT;
			}
			//Do nothing if repeating whitespace
		} else {
			state = IN;
			lenc++;
		}
	}
	print_histogram(wordstats, MAX_WORDLENGTH);
	return 0;
}

int print_histogram(int stats[], int length){
	int i, j, l, limit;

	//Determine limit
	limit = 0;
	for(l = 0; l < length; l++){
		//give me the highest non-zero num
		if(stats[l] > 0){
			limit = l;
		}
	}

	//For a word of length i
	for(i = 1; i <= limit; i++){
		printf("%2d ", i);

		//Print as many # as there were occurences
		for(j = 0; j < stats[i]; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}