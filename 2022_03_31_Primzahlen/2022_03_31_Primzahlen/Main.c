//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_03_31_Primzahlen	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 3/31/2022 11:49:39 AM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int grenze = 0;
	int a = 0;
	int b = 0;
	int primes[100] = { 0 };
	int i = 0;
	int index = 0;


	//Code
	printf("Primzahlberechnung\n");
	printf("Geben sie eine Grenze ein: ");
	scanf("%i", &grenze);

	for (a = 2; a <= grenze; a++)
	{
		for (b = 2; b <= a; b++)
		{
			if ((a % b == 0) && (a != b))
				break;

			if (a == b)
			{
				primes[index] = a;
				index++;
				break;
			}
		}
	}

	printf("\nIm Bereich 0 bis %i gibt es %i Primzahlen\n\n", grenze, index);
	
	for (i = 0; i < index; i++)
	{
		printf("Die %i Primzahl ist %i\n", i+1, primes[i]);
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}