
#include <stdio.h>
int main(void)
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Fahr|Celsius\n");
	while (celsius < upper)
	{
		fahr = (5.0 / 9.0) * (celsius - 32.0);
		printf("%6.1f%3.0f\n", celsius, fahr);
		fahr = fahr + step;
	}
}
