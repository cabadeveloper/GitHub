#include <stdio.h>
int main(void)
{
	int c, nl;

	ni = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
