#include <stdio.h>

int lower(char c){
	return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
}

int main(void){
	printf("%c\n", lower('A'));
	printf("%c\n", lower('a'));
	printf("%c\n", lower('F'));	
	printf("%c\n", lower('G'));
}
