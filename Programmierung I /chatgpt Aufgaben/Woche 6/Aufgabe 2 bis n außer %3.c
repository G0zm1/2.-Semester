#include <stdio.h>

int main()
{
	int Zahl;
	int sum = 0;

	printf("Please enter a Number till we count: ");
	scanf_s("%d", &Zahl);

	for (int i = 1; i <= Zahl; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		else
		{

			sum += i;
		}
	}

		printf("The sum is: %d", sum);
		return 0;
}
