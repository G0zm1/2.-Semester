#include <stdio.h>


int main()
{

	int Zahl;
	int sum = 0;

	printf("Please enter a Number till I have to sum all even Numbers: ");
	scanf_s("%d", &Zahl);

	for (int i = 1; i <= Zahl; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}

	printf("The sum is: %d ", sum);

	return 0;

}
