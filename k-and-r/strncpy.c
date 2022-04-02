#include <stdio.h>
#include <string.h>

int main(void){
	printf("%d\n", strncmp("foo bar", "foo", 3));
	printf("%d\n", strncmp("foo bar", "foo", 4));
	printf("%d\n", strncmp("foo bar", "foor", 4));

	return 0;
}
