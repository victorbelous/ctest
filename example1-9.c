#include <stdio.h>

/* delete blanks */
/* exercize 1-9 */

int main()
{
	int c;
	int oldc;

	oldc=getchar();
	if (oldc == EOF) return 0;
	while ((c = getchar()) !=EOF) {
		if (c == ' ' && oldc == ' ') exit;
		
		oldc = c;
		putchar(c);
	}
	printf("blanks = %d, newlines = %d, tabs = %d\n", blanks,newlines,tabs);
}
