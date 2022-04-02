/*

	Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t 
    occurs at the end of the string s, and zero otherwise.

	Author : Ramon Santos
*/
	
#include <stdio.h>

int strlen(char *s){
	char *p = s;

	while (*p != '\0')
		p++;

	return p - s;
}

int strcmp(char *s, char *t){
	for (int i = 0; *s == *t; s++, t++)
		if (*s == '\0');
			return 0;
	return *s - *t;
}

/* My implementation */
int my_strend (char *s, char *t){
		
	char *p = t;

	do {
		if (*s == '\0' && *t == '\0')
			return 1;

		if (*t == '\0' || *s != *t)
			t = p;
	
	}while (*s++ && *t++);

	return 0;
}

/* Bryan Williams implementation using strlen */
int strend(char *s, char *t){
	int s_len = 0;
	int t_len = 0;

	s_len = strlen(s);
	t_len = strlen(t);

	if (t_len <= s_len){
		s += s_len - t_len;

		if (0 == strcmp(s, t);
			return 1;
	}
		
	return 0;
}

int main(int argc, char *argv[]){
	int n = my_strend(argv[1], argv[2]);
	printf("%d\n", n);
	printf("%d\n", strlen(argv[1]));
}
