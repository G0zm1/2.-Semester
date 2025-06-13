//main

#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main()
{
	int Zahl;

	printf("Please enter an Integer: ");
	scanf_s("%d", &Zahl);

	if (ist_gerade(Zahl))
	{
		printf("The Number is even. \n");
	}
	else
	{
		printf("The Number is not even. \n");
	}

	return 0;
	
}

//header
#pragma once

bool ist_gerade(int Zahl);

//fct.
#include "functions.h"
#include <stdio.h>
#include <stdbool.h>

bool ist_gerade(int Zahl)
{
		return Zahl % 2 == 0;
}
