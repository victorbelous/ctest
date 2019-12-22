#include <stdio.h>

/* count lines in input */

int main()
{
	int c, nl;

	nl = 0;
	while (( c=getchar()) != EOF)
		if (c == ' ')
			++nl;
	printf("%d spaces\n",nl);
}
