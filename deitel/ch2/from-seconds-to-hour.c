/*
 Converts the total time elapsed, in seconds, to hours:minutes:seconds

==========================================================
 Initialize variables
 Input the time elapsed in seconds and converts to hh:mm:ss
 Print the result in console

==========================================================
 Initialize hour to zero
 Initialize minutes to zero

 Input the seconds elapsed 
 Divide the seconds by 3600 and set into the hour
 Get the remainder from seconds by 3600 and set into seconds
 Divide seconds by 60 and set into minutes
 Get the remainder from seconds by 60 and set into seconds

 Print the result in format hh:mm:ss
*/

#include <stdio.h>

int main(void) {
	unsigned int hour = 0;
	unsigned int minutes = 0;
	unsigned int seconds;

	puts("Enter the time elapsed (in seconds)");
	scanf("%d", &seconds);

	hour = seconds / 3600;
	seconds = seconds % 3600;

	minutes = seconds / 60;
	seconds = seconds % 60;

	printf("%02d:%02d:%02d\n", hour, minutes, seconds);
}
