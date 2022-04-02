#include <stdio.h>
#include <string.h>

int m_strlen(char *s);

int main(void){
	char s[] = "hello world!";
	printf("%d\n", m_strlen(s));
	return 0;
}

int m_strlen(char *s){
	int n;

	for (n = 0; *s != '\0'; ++s)
		++n;
	return n;
}

