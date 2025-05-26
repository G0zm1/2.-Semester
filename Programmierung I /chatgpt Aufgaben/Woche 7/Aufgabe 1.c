#include <stdio.h>
#include <string.h> 
#include <ctype.h>


int main()
{
	char ZeichenketteEins[20];
	char ZeichenketteZwei[20];
	char ZeichenketteDrei[20] = "Marmor";


	printf("\nPlease enter your first String: \n");
	scanf_s("%s", &ZeichenketteEins, 20);


	printf("\nPlease enter your second String: \n");
	scanf_s("%s", &ZeichenketteZwei, 20);

	printf("Now we check if both strings are the same: %d\n\n", strcmp(ZeichenketteEins, ZeichenketteZwei));

	printf("Now we check the lenght of the two strings:\nFirst: %d\nsecond: %d\n\n", strlen(ZeichenketteEins), strlen(ZeichenketteZwei));

	printf("Now we copying String 1 in String 3\n\n");
	printf("Das stand vorher drin: %s\n\n", ZeichenketteDrei);

	printf("Und jetzt steht in der dritten: \n");
	strcpy_s(ZeichenketteDrei, ZeichenketteEins);
	printf(ZeichenketteDrei);


	printf("\n\nFertich!");

	return 0;

}
