#include <stdio.h>

int main()
{
	int sum = 0;
	int i;


	for (i=0; i < 1024; i++)
	{
		if (i % 3 == 0)
		sum += i;
		

		if (i % 5 == 0)
		sum += i;
	}

	printf("%i\n", sum);

	return 0;
}