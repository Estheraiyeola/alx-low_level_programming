#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * random_password_generation - generates random valid passwords
 * @N: length of password
 * Return: empty
 */
void random_password_generation(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char passgen[N];
	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			passgen[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", passgen[i]);
		}
		else if (randomizer == 2)
		{
			passgen[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", passgen[i]);
		}
		else if (randomizer == 3)
		{
			passgen[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", passgen[i]);
		}
		else
		{
			passgen[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", passgen[i]);
		}
	}
}
