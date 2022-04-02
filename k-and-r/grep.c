#include <stdio.h>
#define MAXLINE 1000

int _getline(char s[], int lim);
int strindex(char s[], char t[]);

char pattern[] = "ould";

int main(void){
	char line[MAXLINE];
	int found = 0;

	while (_getline(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0){
			printf("%s", line);
			++found;
		}

	return found;
}

/* given a s buffer and a limit, fill all input characters into s until the first line breaker and returns the size of s */
int _getline(char s[], int lim){
	int i, c;	

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
		
	if (c == '\n')
		s[i++] = c;

	s[i] = '\0';

	return i;
}

/* given a line s and a pattern t, produces a index of the fist ocourrence of t in s, -1 if none */
int strindex(char s[], char t[]){
	int i, j, k;

	for (i = 0; s[i] != '\0'; ++i){
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}

	return -1;
}
