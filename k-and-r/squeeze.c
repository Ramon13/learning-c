#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], char c){
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';	
}

int main(void){
	char str[] = {'h','e','l','l','o',' ','w','o','r','l','d','!','\0'};
	squeeze(str, 'l');
	printf("%s\n", str);

	return 0;
}
