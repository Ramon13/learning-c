#include <stdio.h>

int strcmp(char *s, char *t)
{
	for( ; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}

int main(void)
{
	printf("%d\n", strcmp("hell", "hello"));
	return 0;
}
