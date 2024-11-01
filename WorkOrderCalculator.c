/*
	This program receives an input file with the format: Name - number
	It then takes that input, adds the number associated with every instance in the input
	file with the same name together, sorts it, and then outputs to a new file in order
	of greatest to least in the same format of: Name - number
*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX_CHARS 60

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
	char name[MAX_CHARS];
	int count;
};

int compareItems(const void* a, const void* b) 
{
	return ((struct Item*)b)->count - ((struct Item*)a)->count;
}

int main(void) 
{
	FILE* from, * to;
	size_t actualSize = 0;
	size_t itemCount = 0;
	char line[MAX_CHARS];
	struct Item* items;

	from = fopen("from.txt", "r");

	if (from == NULL) 
	{
		perror("Failed to open from.txt");
		exit(1);
	}

	to = fopen("to.txt", "w");

	if (to == NULL) 
	{
		fclose(from);
		perror("Failed to open to.txt");
		exit(1);
	}

	while (fgets(line, MAX_CHARS, from) != NULL) 
	{
		actualSize++;
	}

	rewind(from);

	items = malloc(actualSize * sizeof(struct Item));

	while (fgets(line, MAX_CHARS, from) != NULL)
	{
		int found = 0;
		char name[MAX_CHARS];
		int number;

		sscanf(line, "%[^-] - %d", name, &number);

		name[strcspn(name, " ")] = '\0';

		for (size_t i = 0; i < itemCount; i++) 
		{
			if (strcmp(items[i].name, name) == 0) 
			{
				items[i].count += number;
				found = 1;
				break;
			}
		}

		if (!found) 
		{
			strncpy(items[itemCount].name, name, MAX_CHARS);
			items[itemCount].count = number;
			itemCount++;
		}
	}

	qsort(items, itemCount, sizeof(struct Item), compareItems);

	for (size_t i = 0; i < itemCount; i++) 
	{
		fprintf(to, "%s - %d\n", items[i].name, items[i].count);
	}

	free(items);
	fclose(from);
	fclose(to);
	
	return 0;
}