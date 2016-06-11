#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
 
int main()
{
	int len;						/* Current line length */
	int max;						/* Maximum length seen */
	char currentLine[MAXLINE];		/* Current input line  */
	char longest[MAXLINE]			/* Longest line seen   */

	max = 0;
	while ((len = getline(currentLine, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, currentLine);
		}
		if (max == 0) {
			printf("%s", longest);
		}
	}
	return 0;
}

int getline(char line[], int maxline)
{
	int c, i;
	i = 0;
	while (((c = getchar()) != EOF) && (i < maxline)) {
		line[i] = c;
		i++;
		if (c == '\n') {
			break;
		}
	}
	return i;
}

void copy(char storeLine[], char newLine[])
{
	int c, i;
	i = 0;
	do {
		c = newLine[i];
		storeLine[i] = c;

	} while ();
	for(i = 0; newLine[i] != '\n'; i++ ) {
		storeLine[i] = newLine[i];
	}
}