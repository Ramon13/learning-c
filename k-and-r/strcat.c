#include <stdio.h>

void strcat(char s[], char t[]){
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
		i++;

	while((s[i++] = t[j++]) != '\0')
		;	
}

void strcat_p(char *s, char *t)
{
	while(*s)
		s++;

	while (*s++ = *t++)
		;
}

int main(void){
	char s[100] = {"follow the white rabbit "};

	char *t;
	t = "fool";
		
	strcat_p(s, t);
	printf("%s\n", s);
	return 0;
}
