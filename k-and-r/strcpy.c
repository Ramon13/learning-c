#include <stdio.h>

void m_strcpyarr(char *s, char *t)
{
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

void m_strcpypointer(char *s, char *t)
{
	while(*s++ = *t++)
		;
}

int main(void)
{
	char s[] = "follow the white rabbit";
	char t[] = "follow the green rabbit";

	printf("before copy:\n");
	printf("%s\n", s);
	printf("%s\n", t);
	
	m_strcpypointer(s, t);

	printf("after copy:\n");
	printf("%s\n", s);
	printf("%s\n", t);

	return 0;
}
