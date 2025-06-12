#include <stdio.h>
#include <string.h>

int main()
{
	char PW[] = "geheim";
	char Entry[10];
	int Versuche = 1;



	printf("Please enter your Password: ");
	scanf_s("%s", Entry, 10);

	while (Versuche <=3)
		if (strcmp(Entry, PW)==0)
		{
			printf("The Password is correct. Accses granted. \n");
			return 1;
		}
		else
		{
			printf("Access denied. \n");
			Versuche++;
			printf("Please enter your Password: ");
			scanf_s("%s", Entry, 10);
		}

	printf("Too many attempts. Go away. \n");

	return 0;
}
