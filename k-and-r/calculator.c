#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100 	/* max size of operand or operator */
#define NUMBER '0' 	/* signal that a number was found */

#define MAXVAL 100	/* maximum depth of val stack */

int sp = 0;			/* next free stack position */
double val[MAXVAL];	/* value stack */

void push(double value);
double pop(void);

int main(void){

	push(5.6);
	push(5);
	push(0.34);
	printf("%lf\n", pop());	
	printf("%lf\n", pop());	
	printf("%lf\n", pop());

	return 0;
}

void push(double f){
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void){
	if (sp > 0)
		return  val[--sp];
	else{
		printf("error: stack empty\n");
		return 0.0;
	}
}

