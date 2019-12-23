#include <stdio.h>

/* copy input to output; 1st version */
/* exercize 1-8 */

int main()
{
	int c;
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;

	while ((c = getchar()) !=EOF) {
		if (c = ' ') ++blanks;
		if (c = '\n') ++ newlines;
		if (c = '\t') ++ tabs
		putchar(c);
	}
	printf("blanks = %d, newlines = %d, tabs = %d\n", blanks,newlines,tabs);
}
