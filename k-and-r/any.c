#include <stdio.h>

int any(char s1[], char s2[]){
	int i, j;

	for (i = 0; s1[i] != '\0'; i++){
		for (j = 0; s2[j] != '\0'; j++){
			if (s1[i] == s2[j])
				return i;
		}	
	}

	return -1;
}

int main(void){
	char str[] = {'h','e','l','l','o',',',' ','w','o','r','l','d','\0'};
	char sep[] = {',', '\0'};

	printf("%d\n", any(str, sep));
	return 0;
}
