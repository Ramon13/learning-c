#include <stdio.h>

int main(void){
	char *pmessage;
	pmessage = "follow the white rabbit";

	printf("message: %s\n", pmessage);
	printf("first address of string array: %p\n", pmessage);
	printf("addres of pointer: %p\n", &pmessage);
	return 0;
}
